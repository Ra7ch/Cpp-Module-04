/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:26:25 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:26:26 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    // Dog default constructor.
    Dog();

    // Dog copy constructor.
    Dog(const Dog &other);

    // Animal assignement operator.
    Dog &operator=(const Dog &other);

    // Dog sound.
    void makeSound() const;
    // Dog Distructor.
    ~Dog();
};

#endif