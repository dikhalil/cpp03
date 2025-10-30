/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:51:04 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 16:01:38 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    _name = "";
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (!_hitPoint || !_energyPoint)
    {
        std::cout << "FragTrap " << _name 
                  << " can’t do anything, it has no hit points or energy points left" 
                  << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target
              << " ,causing " << _attackDamage << " point of damage!"
              << std::endl;
    _energyPoint--;
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
