#include "harl.hpp"

int main(int ac, char **av)
{
    Harl child;
    (void)ac;
    if (ac != 2)
        return (std::cout << "Argument Error" << std::endl, 1);
    child.complain(av[1]);
}