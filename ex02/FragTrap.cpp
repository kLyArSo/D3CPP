#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    FragTrap::Name = "Someone";
    this->HitPoints = 100;
    this->AttackDamage = 100;
    this->EnergyPoints = 30;
    std::cout << "| FragTrap |";
    std::cout << FragTrap::Name;
    std::cout << " Is Here!" << std::endl;
}
FragTrap::FragTrap(std::string Name)
{
    FragTrap::Name = Name;
    this->HitPoints = 100;
    this->AttackDamage = 100;
    this->EnergyPoints = 30;
    std::cout << "| FragTrap |";
    std::cout << FragTrap::Name;
    std::cout << " Is Here!" << std::endl;
}
void    FragTrap::operator=(const FragTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoints = other.EnergyPoints;
}
FragTrap::FragTrap(const FragTrap& Other)
{
    (*this) = Other;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "| FragTrap |";
    std::cout << FragTrap::Name;
    std::cout << " Is Requesting a High Five!" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "| FragTrap |";
    std::cout << FragTrap::Name;
    std::cout << " Is No Longer Here!" << std::endl;
}