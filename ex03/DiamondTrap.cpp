//
// Created by Josias Mutshaila kasongo on 2022-12-12.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap("Unnamed_clap_name"), _name("Unnamed")
{
	_hit_points = 100;
	_energy_point = 50;
	_attack_damage = 30;
	std::cout << "DiamondTrap, default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), _name(name)
{
	_hit_points = 100;
	_energy_point = 50;
	_attack_damage = 30;
	std::cout << "DiamondTrap " << _name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "<< _name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap, " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}