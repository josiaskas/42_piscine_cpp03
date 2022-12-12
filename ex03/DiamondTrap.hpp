//
// Created by Josias Mutshaila kasongo on 2022-12-12.
//

#ifndef EX03_DIAMONDTRAP_H
#define EX03_DIAMONDTRAP_H
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap{
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const ScavTrap& s);
		~DiamondTrap();

		void attack(const std::string &target);
		DiamondTrap& operator=(const DiamondTrap& rightSide);
		void whoAmI();
	private:
		std::string _name;
};


#endif //EX03_DIAMONDTRAP_H
