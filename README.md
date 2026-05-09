# Monty Hall Simulation
 
A Monte Carlo simulation of the Monty Hall problem in C++. Runs thousands of iterations to prove that switching doors wins ~66% of the time while staying wins ~33%.
 
## The Problem
 
You pick one of three doors. Behind one is a car, behind the others are goats. The host opens a goat door you didn't pick, then asks: switch or stay? Probability says switch — this simulation proves it empirically.
 
## How to Run
 
```bash
make
./montyhall
```
 
```
Enter the number of iterations: 10000
Switch doors? (y/n): y
```
 
## Example Output
 
```
Results for 10000 iterations:
Switch - Wins: 6672, Losses: 3328, Win percentage: 66.72%
 
Results for 10000 iterations:
Stay   - Wins: 3341, Losses: 6659, Win percentage: 33.41%
```
 
## Structure
 
| File | Description |
|---|---|
| `main.cpp` | User input and simulation entry point |
| `monty.cpp` | Core game logic — door setup, host behavior, win tracking |
| `monty.h` | Class declaration |
 
