/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:20:41 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/30 15:51:24 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap robot1("Diana");
    FragTrap robot2("Bob");
    
    std::cout << "hit point: " << robot1.getHitPoint()
              << ", energy point: " << robot1.getEnergyPoint()
              << ", attack damage: " << robot1.getAttackDamage()
              << std::endl;
    robot1.attack(robot2.getName());
    robot1.highFivesGuys();
    return (0);
}