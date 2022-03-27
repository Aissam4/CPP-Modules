#include "harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2){
        std::cout << "Argument Error" << std::endl;
        return (1);
    }
    Harl child;
    std::string argument(av[1]);

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (argument == levels[i])
        {
            while(i < 4)
                child.complain(levels[i++]);
            return (0);
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}