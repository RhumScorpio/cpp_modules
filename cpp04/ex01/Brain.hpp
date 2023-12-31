#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Brain
{
    private :
        std::string ideas[100];
    public :
        Brain(void);
        Brain(Brain const &copy);
        ~Brain();
        Brain &operator=(Brain const &copy);
        void putIdea(int const i);
        void printIdeas(void);
};

#endif