//
// Created by Josias Mutshaila kasongo on 2022-12-11.
//

#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap();
		explicit ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap& s);
		virtual ~ScavTrap();

		ScavTrap& operator=(const ScavTrap& rightSide);
		virtual void attack(std::string const & target);
		void guardGate();
};


#endif //EX01_SCAVTRAP_H
