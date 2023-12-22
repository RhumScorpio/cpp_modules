#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(Animal const &copy);
        Animal(std::string type);
        virtual ~Animal();
        Animal &operator=(Animal const &copy);
        std::string getType(void) const;
        void setString(std::string const str);
        virtual void makeSound(void) const;
};

#endif