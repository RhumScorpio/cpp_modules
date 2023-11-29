#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    private:
        std::string type;
    public:
        Animal(void);
        virtual ~Animal();
        std::string getType(void) const;
        void setString(std::string const str);
        virtual void makeSound(void) const;
};

#endif