//
// Created by Josias Mutshaila kasongo on 2022-12-08.
//
#include "ClapTrap.hpp"

int main()
{
	ClapTrap luffy("Luffy");
	ClapTrap kaido("Kaido");
	ClapTrap doffy("Doflamingo");

	luffy.attack("Shanks"); //test default 0 damages points
	kaido.attack("Mama");
	doffy.attack("Law");
	luffy.takeDamage(7);
	kaido.takeDamage(5); // energy at 9
	doffy.takeDamage(8);
	luffy.beRepaired(10);

	// beat till he dies
	doffy.takeDamage(19);
	doffy.beRepaired(3);

	//repaired till no energy
	for (unsigned int i = 0; i < 10; i++ ){
		kaido.beRepaired(2);
	}
	kaido.attack("Sanji"); // can't attack
	kaido.takeDamage(10); // but can be attacked

	//destructors
}