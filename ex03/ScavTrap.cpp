#include "ScavTrap.hpp"

ScavTrap::ScavTrap()        //Default Constructor
{
    this->Name = "Someone";
    this->HitPoints = 100;
    this->AttackDamage = 50;
    this->EnergyPoints = 20;
    std::cout << "| ScavTrap |";
    std::cout << this->Name;
    std::cout << "Is Here!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap&    obj)
{
    (*this) = obj;
}
void    ScavTrap::operator=(const ScavTrap& other)
{
    ScavTrap::Name = other.Name;
    ScavTrap::HitPoints = other.HitPoints;
    ScavTrap::AttackDamage = other.AttackDamage;
    ScavTrap::EnergyPoints = other.EnergyPoints;
}
ScavTrap::ScavTrap(std::string  Name)//String Constructor
{
    ScavTrap::Name = Name;
    this->HitPoints = 100;
    this->AttackDamage = 50;
    this->EnergyPoints = 20;
    std::cout << "| ScavTrap |";
    std::cout << ScavTrap::Name;
    std::cout << " Is Here!" << std::endl;
}
ScavTrap::~ScavTrap()       //Default Destructor
{
    std::cout << "| ScavTrap |";
    std::cout << ScavTrap::Name;
    std::cout << " Is No Longer Here!" << std::endl;
}
void ScavTrap::attack(std::string const & target)
{
    std::cout << "| ScavTrap |";
    std::cout << this->Name;
    std::cout << " Attacked " ;
    std::cout << target << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "| ScavTrap |";
    std::cout << this->Name;
    std::cout << " has enterred in Gate keeper mode.";
    std::cout  << std::endl;
}