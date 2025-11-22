/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:51:11 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/22 23:51:04 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap(void);
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap(void);
        void attack(const std::string& target);
        void highFivesGuys(void) const;
};

#endif