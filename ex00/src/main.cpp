/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/02 13:56:45 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	Bob;

	std::cout << "Energy points: "<< Bob.getEnergyPoints() << std::endl;
	Bob.attack("Kevin");
	std::cout << "Energy points: "<< Bob.getEnergyPoints() << std::endl;
	std::cout << "Life: "<< Bob.getHitPoints() << std::endl; 
	Bob.takeDamage(3);
	std::cout << "Life: "<< Bob.getHitPoints() << std::endl; 
	std::cout << "Energy points: "<< Bob.getEnergyPoints() << std::endl;
	Bob.beRepaired(1);
	std::cout << "Life: "<< Bob.getHitPoints() << std::endl; 
	std::cout << "Energy points: "<< Bob.getEnergyPoints() << std::endl;

	ClapTrap	Roger(Bob);

	Roger.attack("BOB");

	ClapTrap	Peter;

	Peter = Roger;
	Roger.attack("BOB");

	return 0;
}
