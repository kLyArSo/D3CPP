#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int         main()
{

    DiamondTrap   obj1("yahia");
    std::cout << "-----------------------------------\n" ;
    obj1.attack("Target"); 
    obj1.beRepaired(10); 
    obj1.takeDamage(20);
    obj1.highFivesGuys();
    obj1.guardGate();
    obj1.whoAmI();
    std::cout << "-----------------------------------\n" ;

}