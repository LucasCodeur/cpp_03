/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:56:46 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/03 11:21:51 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &other );
		ClapTrap& operator=( const ClapTrap &other );
		~ClapTrap( void );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		getEnergyPoints( void );
		int		getHitPoints( void );
	protected:
		std::string			_name;
		std::string			_type;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif
