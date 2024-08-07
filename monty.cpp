#include "monty.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

monty::monty() {
    srand(static_cast<unsigned int>(time(0))); // Seed for randomness
}

void monty::initialize_doors() {
    for (int i = 0; i < 3; ++i) {
        doors[i] = 0; // 0 means goat
    }
    int car_position = rand() % 3;
    doors[car_position] = 1; // 1 means car
}

bool monty::play(bool switch_door) {
    initialize_doors();

    // Player selects a door
    int player_choice = rand() % 3;

    // Host opens a door that has a goat and is not the player's choice
    int host_choice;
    for (int i = 0; i < 3; ++i) {
        if (i != player_choice && doors[i] == 0) {
            host_choice = i;
            break;
        }
    }

    // Determine the remaining unopened door that the player will switch to (if switching)
    int switch_choice = 3 - player_choice - host_choice;

    // Return true if player wins by switching or staying
    if (switch_door) {
        return doors[switch_choice] == 1;
    } else {
        return doors[player_choice] == 1;
    }
}

void monty::simulate(int num_iterations, bool switch_door) {
    int wins = 0;

    for (int i = 0; i < num_iterations; ++i) {
        if (play(switch_door)) {
            ++wins;
        }
    }

    cout << "Results for " << num_iterations << " iterations:\n";
    cout << (switch_door ? "Switch" : "Stay") << " - Wins: " << wins;
    cout << ", Losses: " << num_iterations - wins;
    cout << ", Win percentage: " << (static_cast<double>(wins) / num_iterations) * 100 << "%\n";
}
