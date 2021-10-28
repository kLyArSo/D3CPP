#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->Name = "Someone";
    ClapTrap::Name = Name + "_clap_name";
    this->HitPoints = 100;//FragTrap
    this->AttackDamage = 30;//FragTrap
    this->EnergyPoints = 50;//ScavTrap
    std::cout << "| DiamondTrap | " << this->Name << " is\n"; 
}
DiamondTrap::DiamondTrap(std::string Name)
{
    this->Name = Name;
    ClapTrap::Name = Name + "_clap_name";
    this->HitPoints = 100;//FragTrap
    this->AttackDamage = 30;//FragTrap
    this->EnergyPoints = 50;//ScavTrap
    std::cout << "| DiamondTrap | " << this->Name << " is\n"; 
    
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Diamond->Name = " << this->Name<< std::endl;
    std::cout << "ClapTrap->Name = " << ClapTrap::Name << std::endl;
}
void    DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}
void    DiamondTrap::operator=(const DiamondTrap& other)
{
    this->Name = other.Name;
    ClapTrap::Name = other.Name + "_clap_name";
    this->HitPoints = 100;//FragTrap
    this->AttackDamage = 30;//FragTrap
    this->EnergyPoints = 50;//ScavTrap
}
DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    *this = other;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "| DiamondTrap | " << this->Name << " is no longer\n"; 
}