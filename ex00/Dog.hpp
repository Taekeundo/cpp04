#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

/*
    'Dog' Derived class, inherits from 'Animal' class.
*/
class Dog : public Animal
{
    public:
        Dog();                      // Default construtor
        ~Dog();                     // Destructor
        void makeSound() const;     // Over-riding function
};

#endif
