//
// Created by Josias Mutshaila kasongo on 2022-12-12.
//

#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap& f);
		~FragTrap();

		FragTrap& operator=(const FragTrap& rightSide);
		void attack(std::string const & target);
		void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_H
