//
// Created by Josias Mutshaila kasongo on 2022-12-08.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		explicit ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &C);

		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &C);

		void attack(const std::string &target);

		void takeDamage(unsigned int amount);

		void beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_point;
		unsigned int	_attack_damage;
};


#endif //EX00_CLAPTRAP_HPP
