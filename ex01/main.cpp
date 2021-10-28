#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int         main()
{

    ScavTrap    obj1;
    std::cout << "-----------------------------------\n" ;
    obj1.attack("Target"); 
    obj1.beRepaired(10); 
    obj1.takeDamage(20); 
    obj1.guardGate();
    std::cout << "-----------------------------------\n" ;
    
    ScavTrap    obj2("Yahia");
    std::cout << "-----------------------------------\n" ;
    obj2.attack("Target"); 
    obj2.beRepaired(10); 
    obj2.takeDamage(20); 
    obj2.guardGate();
    std::cout << "-----------------------------------\n" ;

}