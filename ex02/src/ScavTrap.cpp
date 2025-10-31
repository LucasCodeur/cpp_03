/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:35:56 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/05 16:15:16 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "Default constructor of ScavTrap called\n";
	this->_name = "Bob";
	this->_type = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "Constructor of the derived class ScavTrap" << std::endl;
	this->_name = name;
	this->_type = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor of the derived class ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other )
{
	std::cout << "Parameterized constructor called\n";
	this->_name = other._name;
	this->_type = other._type;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &other )
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

void ScavTrap::guardGate( void )
{
	std::cout << this->_type << this->_name << " is now in Gate keeper mode" << std::endl;
}

int	ScavTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int	ScavTrap::getHitPoints( void )
{
	return (this->_hitPoints);
}
