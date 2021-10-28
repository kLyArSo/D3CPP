#include "ClapTrap.hpp"

ClapTrap::ClapTrap()                                //Default Constructor
{
    ClapTrap::Name = "Someone";
    this->HitPoints = 10;
    this->AttackDamage = 10;
    this->EnergyPoints = 0;
    std::cout << "| ClapTrap |";
    std::cout << ClapTrap::Name;
    std::cout << " Is Here!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap&othr)             //Copy constructor
{
    *this = othr;
}
void    ClapTrap::operator=(const ClapTrap& other)  //Assignation Operator overload
{
    ClapTrap::Name = other.Name;
    ClapTrap::HitPoints = other.HitPoints;
    ClapTrap::AttackDamage = other.AttackDamage;
    ClapTrap::EnergyPoints = other.EnergyPoints;
}
ClapTrap::~ClapTrap()                               //Default Destructor
{
    std::cout << "| ClapTrap |";
    std::cout << ClapTrap::Name;
    std::cout << " Is No Longer Here!" << std::endl;
}


ClapTrap::ClapTrap(std::string  Name)//String Constructor
{
    this->Name = Name;
    this->HitPoints = 10;
    this->AttackDamage = 10;
    this->EnergyPoints = 0;
    std::cout << "| ClapTrap |";
    std::cout << this->Name;
    std::cout << "Is Here!" << std::endl;
}


void ClapTrap::attack(std::string const & target)
{
    std::cout << "| ClapTrap |";
    std::cout << this->Name;
    std::cout << " Attacked " ;
    std::cout << target << std::endl;

}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "| ClapTrap |";
    std::cout << this->Name;
    std::cout << " Took ";
    std::cout << amount;
    std::cout << " Points of Damage " << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "| ClapTrap |";
    std::cout << this->Name;
    std::cout << " Restored ";
    std::cout << amount;
    std::cout << " Points of Damage " << std::endl;
}
