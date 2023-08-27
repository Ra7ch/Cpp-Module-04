/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:23:06 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:23:07 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    // Cat default constructor.
    Cat();
    
    // Cat copy constructor.
    Cat(const Cat& other) ;
   
    // Animal assignement operator.
    Cat& operator=(const Cat& other);

    // Cat sound.
    void makeSound() const;

    // Cat Distructor.
    ~Cat();
};

#endif
