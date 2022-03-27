#include "harl.hpp"

int main( void )
{
    Harl child;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        std::cout << "=> ", child.complain(levels[i]);
}