#include "ClapTrap.hpp"

int         main()
{

    ClapTrap    obj1;
    
    obj1.attack("Ennemy");
    obj1.beRepaired(10);
    obj1.takeDamage(5);
    std::cout << "------------------------------------------\n";
    ClapTrap    obj2("Named_individual");
    obj2.attack("Ennemy");
    obj2.beRepaired(10);
    obj2.takeDamage(5);
    std::cout << "------------------------------------------\n";
    // obj2 = obj1;
    // obj2.attack("Ennemy");
    // obj2.beRepaired(10);
    // obj2.takeDamage(5);
    // std::cout << "------------------------------------------\n";
}