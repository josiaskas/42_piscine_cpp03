//
// Created by Josias Mutshaila kasongo on 2022-12-11.
//

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
	_hit_points = 100;
	_energy_point = 50;
	_attack_damage = 30;
	std::cout << "FragTrap, default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	_hit_points = 100;
	_energy_point = 50;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& s): ClapTrap(s)
{
	std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< _name << " destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rightSide)
{
	ClapTrap::operator=(rightSide);
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (_energy_point > 0)
	{
		if (_hit_points > 0 ){
			_energy_point -= 1;
			std::cout << "FragTrap " << _name << " attacks " << target
					  << ", causing " << _attack_damage << " points of damage!" << std::endl;
		}else{
			std::cout << "FragTrap " << _name << " Try to attack but has take too many damages"
					  << std::endl;
		}
	}
	else
		std::cout << "FragTrap " << _name << " Try to attack but has low energy point"
				  << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << ": Hey, High five guys !!!" << std::endl;
}
