/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:33:42 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/28 20:50:11 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " created!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoint = other._hitPoint;
        _energyPoint = other._energyPoint;
        _attackDamage = other._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}
void ClapTrap::setName(std::string name)
{
    _name = name;
}
void ClapTrap::setHitPoint(unsigned int hitPoint)
{
    _hitPoint = hitPoint;
}
void ClapTrap::setEnergyPoint(unsigned int energyPoint)
{
    _energyPoint = energyPoint;
}
void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    _attackDamage = attackDamage;
}
std::string ClapTrap::getName(void) const
{
    return (_name);
}
unsigned int ClapTrap::getHitPoint(void) const
{
    return (_hitPoint);
}
unsigned int ClapTrap::getEnergyPoint(void) const
{
    return (_energyPoint);
}
unsigned int ClapTrap::getAttackDamage(void) const
{
    return (_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if (!_hitPoint || !_energyPoint)
    {
        std::cout << "ClapTrap " << _name 
                  << " can’t do anything, it has no hit points or energy points left" 
                  << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target
              << " ,causing " << _attackDamage << " point of damage!"
              << std::endl;
    _energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!_hitPoint)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return ;
    }
    if (amount > _hitPoint)
        _hitPoint = 0;
    else
        _hitPoint -= amount;
    std::cout << "ClapTrap " << _name << " takes " 
              << amount << " points of damage!"
              << std::endl;
    if (!_hitPoint)
        std::cout << "ClapTrap " << _name << " has died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_hitPoint || !_energyPoint)
    {
        std::cout << "ClapTrap " << _name 
                  << " can’t do anything, it has no hit points or energy points left" 
                  << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is repaired by " 
              << amount << " points!"
              << std::endl;
    _hitPoint += amount;
    _energyPoint--;
}
