/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 05:24:13 by raitmous          #+#    #+#             */
/*   Updated: 2023/08/27 05:24:14 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    // WrongCat default constructor.
    WrongCat();
    
    // WrongCat copy constructor.
    WrongCat(const WrongCat& other) ;
   
    // Animal assignement operator.
    WrongCat& operator=(const WrongCat& other);

    // WrongCat sound.
    void makeSound() const;

    // WrongCat Distructor.
    ~WrongCat();
};

#endif