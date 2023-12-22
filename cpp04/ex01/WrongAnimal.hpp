#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{    
    protected :
        std::string type;
    public :
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal();
        WrongAnimal operator=(WrongAnimal const &copy);
        std::string getType(void) const;
        void setString(std::string const str);
        void makeSound(void) const;
};

#endif