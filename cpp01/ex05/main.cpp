#include "Harl.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
    int i = 0;
    int level = 0;
    std::string    identifiers[4]={ "INFO", "WARNING", "ERROR", "DEBUG" };
    Harl  harl;

    if (ac == 2)
    {
        while (i < atoi(av[1]))
        {
            level = rand() % 4;
            std::cout << level << "| " << std::flush;
            harl.complain(identifiers[level]);
            i++;
        }
    }
    else
        std::cout << "Put a number : ./Harl nbOfComplain" << std::endl;
    return (0);
}