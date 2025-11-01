/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:20:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/31 15:54:37 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ScavTrap("Bob_clap_name"), FragTrap("Bob_clap_name")
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
	this->_name = "Bob";
	this->_type = "DiamondTrap ";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) : ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
	this->_name = name;
	this->_type = "DiamondTrap ";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "Parameterized constructor of DiamondTrap called\n";
	this->_name = other._name;
	this->_type = other._type;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap &other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_type = other._type;
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

void DiamondTrap::whoAmI()
{
	std::cout << this->_type << this->getName() << std::endl;
	std::cout << "Parent ClapTrap: " << this->ClapTrap::getName() << std::endl;
}
