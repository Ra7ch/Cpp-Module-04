/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:27:22 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:27:23 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors of Brain.
Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "Default idea";
}
Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

// copy assignment operator.
Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Brain copy assignment operator called." << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

// Set idea.
void Brain::set_idea(int i, std::string idea)
{
    if (i >= 0 && i < 100)
        ideas[i] = idea;
}

// Get idea
const std::string& Brain::get_idea(int i)
{
    static const std::string invalid = "Invalid Index";
    if (i >= 0 && i < 100)
        return ideas[i];
    return invalid;
}

// Destructor of Brain.
Brain::~Brain() { std::cout << "Brain is destructor called." << std::endl; }
