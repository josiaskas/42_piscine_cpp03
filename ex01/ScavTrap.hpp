//
// Created by Josias Mutshaila kasongo on 2022-12-11.
//

#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap& s);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap& rightSide);
		void guardGate();
};


#endif //EX01_SCAVTRAP_H
