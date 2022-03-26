#ifndef __HARL_HPP__
#define __HARL_HPP__
#include <iostream>

class Harl
{
private:
    void    info( void );
    void    debug( void );
    void    warning( void );
    void    error( void );
public:
    ~Harl();
    Harl();
    void    complain(std::string level);
};

#endif