/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:20:31 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/06 16:52:22 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : FragTrap(name) 
{
	std::cout << "Constructor of the derived class DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap( void ) 
{
	std::cout << "Deconstructor of the derived class DiamondTrap" << std::endl;
}

// int	DiamondTrap::getEnergyPoints( void )
// {
// 	return (this->_energyPoints);
// }
//
// int	DiamondTrap::getHitPoints( void )
// {
// 	return (this->_hitPoints);
// }
