#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destroyed" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string    identifiers[4]={ "INFO", "WARNING", "ERROR", "DEBUG" };
    void           (Harl::*ptr[4])(void) = { &Harl::info, &Harl::warning, &Harl::error, &Harl::debug };
    int            i = 0;

    while (i < 4)
    {
        if (identifiers[i].compare(level) == 0)
        {
            (this->*ptr[i])();
            break ;
        }
        i++;
   }
}