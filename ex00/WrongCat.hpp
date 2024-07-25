#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

/*
    'WrongCat' Derived class, inherits from 'WrongAnimal' class.
*/
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();                 // Default constructor
        ~WrongCat();                // Destrutor
        void makeSound() const;     // Over-riding function
};

#endif
