#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal(void);
        AAnimal(AAnimal const &copy);
        AAnimal(std::string type);
        virtual ~AAnimal() = 0;
        AAnimal &operator=(AAnimal const &copy);
        std::string getType(void) const;
        void setString(std::string const str);
        virtual void makeSound(void) const = 0;
        virtual void addIdeas(const int nbOfIdeas) const = 0;
        virtual void showIdeas(void) const = 0;
};

#endif