/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:34:06 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/31 15:24:22 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	protected:
		unsigned int	_energyPoints;
		unsigned int	_HitPoints;
		unsigned int	_attackDamage;
		std::string		_type;
	public:
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap& operator=( const FragTrap &other );
		FragTrap( const FragTrap &other );
		~FragTrap( void );
		void highFivesGuys(void);
		int	getEnergyPoints( void );
		int	getHitPoints( void );
		int	getAttackDamage( void );
};

#endif
