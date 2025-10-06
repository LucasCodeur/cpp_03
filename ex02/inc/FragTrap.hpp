/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:34:06 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/06 14:42:00 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );
		void highFivesGuys(void);
		int	getEnergyPoints( void );
		int	getHitPoints( void );
	private:
};

#endif
