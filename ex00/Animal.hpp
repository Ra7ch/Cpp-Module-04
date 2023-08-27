/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:22:40 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:22:41 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    // Animal default constructor.
    Animal();
    
    //Animal Construtor for specific breed
    Animal(const std::string& breed);

    // Animal copy constructor.
    Animal(const Animal& other);

    // Animal assignement operator.
    Animal& operator=(const Animal& other);

    // Animal type getter.
    std::string getType() const;

    // Animal sound.
    virtual void makeSound() const;

    // Animal Distructor.
    virtual ~Animal();
};

#endif