#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

/*
    'Cat' Derived class, inherits from 'Animal' class.
*/
class Cat : public Animal
{
    public:
        Cat();                      // Default constructor
        ~Cat();                     // Destrutor
        void makeSound() const;     // Over-riding function
};

#endif
