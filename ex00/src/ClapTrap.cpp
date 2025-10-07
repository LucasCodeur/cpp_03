/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:53:58 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/02 14:00:12 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called\n";
	this->_name = "Bob";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( std::string name )
{
	std::cout << "Parameterized constructor called\n";
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &other )
{
	std::cout << "Parameterized constructor called\n";
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap( void )
{
	std::cout << "Deconstructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "Not enough energy, go to a tavern and chill a moment" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "Not enough hit points, you are dead" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Dude " << this->_name << "is already dead" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " take damage: " << amount << std::endl; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "Not enough energy, go to a tavern and chill a moment" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "Not enough hit points, you are dead" << std::endl;
		return ;
	}
	if (this->_hitPoints >= 10)
	{
		std::cout << "Full life" << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " repairing itself of: " << amount << std::endl; 
	this->_hitPoints += amount;
}

int	ClapTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int	ClapTrap::getHitPoints( void )
{
	return (this->_hitPoints);
}
