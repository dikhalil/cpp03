/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:20:41 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/31 19:15:03 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap robot1("Diana");
    DiamondTrap robot2("Bob");
    
    std::cout << "hit point: " << robot1.getHitPoint()
              << ", energy point: " << robot1.getEnergyPoint()
              << ", attack damage: " << robot1.getAttackDamage()
              << std::endl;
    robot1.attack(robot2.getName());
    robot1.whoAmI();
    robot1.highFivesGuys();
    robot1.guardGate();
    return (0);
}