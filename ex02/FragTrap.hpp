#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap&);
        void    operator=(const FragTrap&);
        ~FragTrap();

        FragTrap(std::string );

        void    highFivesGuys(void);
};
#endif