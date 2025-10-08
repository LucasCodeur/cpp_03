/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:34:09 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/07 19:36:53 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Bob")
{
	std::cout << "Default constructor of FragTrap called\n";
	this->_name = "Bob";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "Constructor of the derived class FragTrap" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor of the derived class FragTrap" << std::endl;
}

FragTrap::FragTrap( const FragTrap &other )
{
	std::cout << "Parameterized constructor of FragTrap called\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

FragTrap& FragTrap::operator=( const FragTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wanna do a high fives guys ? " << std::endl; 

}

int	FragTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int	FragTrap::getHitPoints( void )
{
	return (this->_hitPoints);
}

int	FragTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}
