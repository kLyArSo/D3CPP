#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int         main()
{

    FragTrap    obj1("HOHOHOH");
    std::cout << "-----------------------------------\n" ;
    obj1.attack("Target"); 
    obj1.beRepaired(10); 
    obj1.takeDamage(20); 
    obj1.highFivesGuys();
    std::cout << "-----------------------------------\n" ;

}