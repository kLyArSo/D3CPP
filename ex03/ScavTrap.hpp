#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap&);          //Copy Constuctor
        void    operator=(const ScavTrap&); //Operator Overload
        ~ScavTrap();

        ScavTrap(std::string  Name);

        void    attack(std::string const & target);
        void    guardGate();
};
#endif