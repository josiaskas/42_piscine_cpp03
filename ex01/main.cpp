//
// Created by Josias Mutshaila kasongo on 2022-12-08.
//
#include "ScavTrap.hpp"

int main()
{
	ScavTrap luffy("Luffy");
	ClapTrap baggy("Baggy"); //Simple ClapTrap

	luffy.takeDamage(25); //more than a normal ClapTrap

	luffy.guardGate(); // check if guardGate work on this type

	ScavTrap ace(luffy); // new one with 75
	ace.takeDamage(75);
	luffy.takeDamage(30);

	// = operator with a ClapTrap, mother class can take daughter
	baggy = luffy;
	baggy.attack("mihawk");
}