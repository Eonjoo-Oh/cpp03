#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name) : ClapTrap(name) {
			std::cout << "FragTrap constructor called" << std:: endl;
			_hitPoints = 100;
			_energyPoints = 100;
			_attackDamage = 30;
		};
		FragTrap(const FragTrap &fragTrap);
		FragTrap& operator=(const FragTrap &fragTrap);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif