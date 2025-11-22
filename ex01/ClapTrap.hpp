/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:24:43 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/22 23:47:04 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoint;
        unsigned int _energyPoint;
        unsigned int _attackDamage;
        ClapTrap(void);
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap &operator=(const ClapTrap &other);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setHitPoint(unsigned int hit);
        void setEnergyPoint(unsigned int energyPoint);
        void setAttackDamage(unsigned int attackDamage);
        std::string getName(void) const;
        unsigned int getHitPoint(void) const;
        unsigned int getEnergyPoint(void) const;
        unsigned int getAttackDamage(void) const;
};

#endif