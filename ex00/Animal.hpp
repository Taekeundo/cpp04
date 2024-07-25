#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define R       "\033[1;31m"
#define G       "\033[1;32m"
#define Y       "\033[1;33m"
#define B       "\033[1;34m"
#define EOC     "\033[0;0m"

#include <iostream>
#include <string>

/*
    Animal class

    [ Background ]
    Virtual function allow to override member function in sub-class(= child).

    [ Example ]

          Animal        // Parent
        /        \
     Dog          Cat   // Child

    [ memo ]
    over-riding function
        condition (1) public scope.
        condition (2) define with 'virtual' in parent.
    
    Derived classes(Cat & Dog) don't need to define member variable one-more time.
    Just use parent's protected member varaible.
*/
class   Animal
{
    protected:
        std::string type;                       // Inherited memver variable

    public:
        Animal();                               // Default constructor
        virtual ~Animal();                      // Destructor
        Animal(const Animal &rhs);              // Copy constructor
        Animal& operator=(const Animal &rhs);   // 

        std::string getType() const;        // Member function
        virtual void makeSound() const;     // Over-riding function
};

#endif
