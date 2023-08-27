/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:27:26 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:27:27 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    // Constructors of Brain.
    Brain();
    Brain(const Brain &other);

    // copy assignment operator.
    Brain &operator=(const Brain &other);

    // Set idea.
    void set_idea(int i, std::string idea);

    // Get idea
    const std::string &get_idea(int i);

    // Destructor of Brain.
    ~Brain();
};

#endif