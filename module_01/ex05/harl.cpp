#include "harl.hpp"

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7xl-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! if you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free, I've been coming for years whereas you started working here since last month," << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

Harl::Harl(){}
Harl::~Harl(){}

void    Harl::complain( std::string level)
{
    std::string FuncTable[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void  (Harl::*func[])(void) = {
        func[0] = &Harl::debug,
        func[1] = &Harl::info,
        func[2] = &Harl::warning,
        func[3] = &Harl::error,
    };
    for (int i = 0; i < 4; i++)
    {
        if (level == FuncTable[i])
            (this->*func[i])();
    }
}

