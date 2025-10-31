/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:44:43 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/22 17:55:32 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap :public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap& operator=( const DiamondTrap &other );
		~DiamondTrap( void );
		int	getEnergyPoints( void );
		int	getHitPoints( void );
	const	int&	getAttackDamage( void );
		std::string getName( void );
		void whoAmI();
	private:
		std::string			_name;
};

#endif
