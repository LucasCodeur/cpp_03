/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/06 14:42:25 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap	Bob("Bob");
	ScavTrap	Clyde("Clyde");
	FragTrap	George("George");

	Clyde.guardGate();
	std::cout << "Clyde Energy Points :" << Clyde.getEnergyPoints() << std::endl;
	std::cout << "Clyde Hit Points :" << Clyde.getHitPoints() << std::endl;

	George.highFivesGuys();
	std::cout << "George Energy Points :" << George.getEnergyPoints() << std::endl;
	std::cout << "George Hit Points :" << George.getHitPoints() << std::endl;

	return 0;
}
