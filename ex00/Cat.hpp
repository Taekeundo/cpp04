/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkwak <tkwak@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:44:26 by tkwak             #+#    #+#             */
/*   Updated: 2024/07/26 11:44:27 by tkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

/*
    'Cat' Derived class, inherits from 'Animal' class.

    [ Orthodox Canonical Form ]
    1. Default constructor
    2. Destructor
    3. Copy constructor
    4. Overloaded assignment operator

    [ Over-riding function from parent class ]
    1. makeSound
*/
class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &rhs);
        Cat& operator=(const Cat &rhs);

        void makeSound() const;
};

#endif
