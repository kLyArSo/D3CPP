#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string Name;
    public:
    DiamondTrap();
    DiamondTrap(std::string Name);
    void    operator=(const DiamondTrap&);
    DiamondTrap(const DiamondTrap&);
    ~DiamondTrap();
};