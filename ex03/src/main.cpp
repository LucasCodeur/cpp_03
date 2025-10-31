/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/22 17:57:40 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap Paul("Bertrand");

	ClapTrap*	paulfrag = &Paul;
	ScavTrap*	paulscav = &Paul;
	std::cout << Paul.getName() << " Hitpoints :" << Paul.getHitPoints() << std::endl;
	std::cout << Paul.getName() << " energypoints :" << Paul.getEnergyPoints() << std::endl;
	std::cout << Paul.getName() << " attackDamage :" <<  &Paul.getAttackDamage() << Paul.getAttackDamage() << std::endl;
	std::cout << Paul.getName() << " attackDamage :" <<  &paulscav->getAttackDamage() << Paul.getAttackDamage() << std::endl;

	Paul.attack("BOB");
	Paul.whoAmI();

	return 0;
}
