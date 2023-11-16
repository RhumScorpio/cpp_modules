#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private :
        void info(void);
        void warning(void);
        void error(void);
        void debug(void);
    public :
        Harl(void);
        ~Harl();
        void complain(std::string level);
};

#endif