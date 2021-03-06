/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <cwastche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:44:39 by cwastche          #+#    #+#             */
/*   Updated: 2022/07/08 15:53:01 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap: public ClapTrap
{
	
public:
	FragTrap(void);
	FragTrap(const FragTrap& copy);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap&	operator=(const FragTrap& FragTrap);

	void highFivesGuys(void);
};

#endif