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

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
	this->_name = "Bob";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = "Bob_clap_name";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap()
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap( const DiamondTrap &other )
{
	std::cout << "Parameterized constructor called\n";
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
