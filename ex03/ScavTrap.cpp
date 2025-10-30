/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:52:34 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 16:01:45 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!_hitPoint || !_energyPoint)
    {
        std::cout << "ScavTrap " << _name 
                  << " can’t do anything, it has no hit points or energy points left" 
                  << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target
              << " ,causing " << _attackDamage << " point of damage!"
              << std::endl;
    _energyPoint--;
}
void ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap is now in Gate keeper mode" <<std::endl;
}
