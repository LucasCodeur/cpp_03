/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:20:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/07 19:40:35 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap("Bob_clap_name")
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
	this->_name = "Bob";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string name ) : FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	this->_name = name;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other )
{
	std::cout << "Parameterized constructor of DiamondTrap called\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap &other )
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

DiamondTrap::~DiamondTrap( void ) 
{
	std::cout << "Deconstructor of the derived class DiamondTrap" << std::endl;
}

int	DiamondTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int	DiamondTrap::getHitPoints( void )
{
	return (this->_hitPoints);
}

std::string DiamondTrap::getName( void )
{
	return (this->_name);
}

int	DiamondTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}

void DiamondTrap::attack(const std::string& target)
{
		ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Claptrap: " << this->getName() << std::endl;
	std::cout << "Parent ClapTrap: " << this->ClapTrap::getName() << std::endl;
	std::cout << "Parent ScavTrap: " << this->ScavTrap::getName() << std::endl;
	std::cout << "Parent FragTrap: " << this->FragTrap::getName() << std::endl;
}
