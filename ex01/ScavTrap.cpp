//
// Created by Josias Mutshaila kasongo on 2022-12-11.
//

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	_hit_points = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap, default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	_hit_points = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& s): ClapTrap(s)
{
	std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< _name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rightSide)
{
	ClapTrap::operator=(rightSide);
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered Gate keeper mode" << std::endl;
}
