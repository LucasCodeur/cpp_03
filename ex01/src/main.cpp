/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/06 14:30:54 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap	Bob;
	ScavTrap	Clyde("Clyde");
	Clyde.guardGate();
	std::cout << "Clyde Energy Points :" << Clyde.getEnergyPoints() << std::endl;
	std::cout << "Clyde Hit Points :" << Clyde.getHitPoints() << std::endl;

	return 0;
}
