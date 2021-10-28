#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string  Name;
        int          HitPoints;
        int          EnergyPoints;
        int          AttackDamage;   
    public:
        ClapTrap();                         //Default Constuctor
        ClapTrap(const ClapTrap&);          //Copy Constuctor
        void    operator=(const ClapTrap&); //Operator Overload
        ~ClapTrap();                        //Destructor

        ClapTrap(std::string);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif