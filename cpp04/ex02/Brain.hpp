#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Brain
{
    private :
        std::string *ideas;
    public :
        Brain(void);
        Brain(Brain &copy);
        ~Brain();
        Brain &operator=(Brain const &copy);
        void putIdea(int const i);
        void printIdeas(void);
        std::string *getIdeas(void);
};

#endif