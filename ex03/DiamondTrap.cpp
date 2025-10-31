/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:08:59 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 19:24:29 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    _name = "";
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap created!" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name)
{
    ClapTrap::_name = name + "_clap_name";
    _name = name;
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 30;
    std::cout << "DiamondTrap " << _name << " created!" << std::endl;
    std::cout <<  _hitPoint << " " << _energyPoint << " " << _attackDamage << std::endl;

}
DiamondTrap::DiamondTrap(const DiamondTrap &other) :
    ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = other;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        ClapTrap::operator=(other);
    }
    return (*this);
}
DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << _name << " destroyed!" << std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap: " << _name 
              << "\nClapTrap: "  << ClapTrap::getName()
              << std::endl;
}