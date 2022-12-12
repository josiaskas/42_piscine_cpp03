//
// Created by Josias Mutshaila kasongo on 2022-12-08.
//
#include "DiamondTrap.hpp"

int main()
{
	/*
	  // Part 1 ClapTrap test

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

		// copy constructor
		ClapTrap mega(luffy);
		mega.attack("zoro");

		// = op
		kaido.takeDamage(2);
		kaido = doffy;
		kaido.takeDamage(2);


	 //part 2 Scav

	 	ScavTrap ichigo("Ichigo");
		ClapTrap baggy("Baggy"); //Simple ClapTrap

		ichigo.takeDamage(25); //more than a normal ClapTrap

		ichigo.guardGate(); // check if guardGate work on this type

		ScavTrap ace(ichigo); // new one with 75
		ace.takeDamage(75);
		ichigo.takeDamage(30);

		// = operator with a ClapTrap, mother class can take daughter
		baggy = ichigo;
		baggy.attack("mihawk");

	 	//dynamic linkage with a mother class

		ClapTrap *poly = new ScavTrap("Poly");
		poly->attack("bot");
		delete poly;

	 // part 3 Frag

		FragTrap kenpachi("Zaraki");
		ClapTrap byakuya("Byakuya"); //Simple ClapTrap

		kenpachi.attack("Unohana"); //special frag
		kenpachi.takeDamage(25); //more than a normal ClapTrap

		kenpachi.highFivesGuys(); // check if highfive work on this type

		FragTrap goji(kenpachi);
		goji.takeDamage(75);
		kenpachi.takeDamage(30);

		// = operator with a ClapTrap, mother class can take daughter
		byakuya = kenpachi;
		byakuya.attack("renji");

	 	//dynamic linkage
			ClapTrap *poly2 = new FragTrap("Poly");
			poly2->attack("bot");
			delete poly2;
	*/
	DiamondTrap naruto("Uzumaki");
	naruto.whoAmI();

	naruto.attack("sasuke");
	// both members are present
	naruto.highFivesGuys();
	naruto.guardGate();
}