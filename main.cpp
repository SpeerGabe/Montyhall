#include "monty.h"
#include <iostream>

using namespace std;

int main() {
    monty Monty;
    int num_iterations;
    char user_choice;

    // Prompt for the number of iterations
    cout << "Enter the number of iterations for the simulation: ";
    cin >> num_iterations;

    // Check if the input is valid
    if (num_iterations <= 0) {
        cerr << "Invalid number of iterations." <<endl;
        return 1;
    }

    // Prompt the user to switch
    cout << "Do you want to switch doors after the host opens a door? (y/n): ";
    cin >> user_choice;

    bool switch_door = (user_choice == 'y' || user_choice == 'Y');

    // Run the simulation with the user-provided number of iterations and choice
    Monty.simulate(num_iterations, switch_door);

    return 0;
}
