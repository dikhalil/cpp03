/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:20:41 by dikhalil          #+#    #+#             */
/*   Updated: 2025/10/28 18:50:02 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap robot1("Diana");
    ClapTrap robot2("Bob");
    
    robot1.attack(robot2.getName());
    robot1.takeDamage(9);
    robot1.beRepaired(9);
    robot1.takeDamage(10);
    robot1.beRepaired(10);
    return (0);
}