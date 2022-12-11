//
// Created by Josias Mutshaila kasongo on 2022-12-08.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
		: _name("Unnamed"), _hit_points(10), _energy_point(10),
		  _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
		: _name(name), _hit_points(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &C)
		: _name(C._name), _hit_points(C._hit_points),
		  _energy_point(C._energy_point),
		  _attack_damage(C._attack_damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< _name << " destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C)
{
	_name = C._name;
	_hit_points = C._hit_points;
	_energy_point = C._energy_point;
	_attack_damage = C._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy_point > 0)
	{
		if (_hit_points > 0 ){
			_energy_point -= 1;
			std::cout << "ClapTrap " << _name << " attacks " << target
					  << ", causing " << _attack_damage << " points of damage!" << std::endl;
		}else{
			std::cout << "ClapTrap " << _name << " Try to attack but has take too many damages"
					  << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << _name << " Try to attack but has low energy point"
				  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't take more damage" << std::endl;
	else if (amount >= _hit_points)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount
				  << " damages,  fatality :(" << std::endl;
		_hit_points = 0;
	}
	else
	{
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount
				  << " damages and " << _hit_points << " hit points remain"
				  << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_point > 0)
	{
		if (_hit_points <= 0){
			std::cout << "ClapTrap " << _name << ", can 't be repaired, is already dead :("<< std::endl;
			return;
		}
		_energy_point -= 1;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repaired, hit point are now:"
				  << _hit_points << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name
				  << ", Not enough energy to be repaired" << std::endl;
	}
}