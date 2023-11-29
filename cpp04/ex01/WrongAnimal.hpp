#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{    
    private:
        std::string type;
    public:
        WrongAnimal(void);
        virtual ~WrongAnimal();
        std::string getType(void) const;
        void setString(std::string const str);
        virtual void makeSound(void) const;
};

class WrongCat : public WrongAnimal
{
    public :
        WrongCat(void);
        ~WrongCat();
        void makeSound(void) const;
};

#endif