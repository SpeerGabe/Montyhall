#ifndef MONTY_H
#define MONTY_H

class monty{
public:
    monty();
    bool play(bool switch_door);
    void simulate(int num_iterations, bool switch_door);

private:
    void initialize_doors();
    int doors[3];
};

#endif // MONTY_H
