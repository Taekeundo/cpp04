#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#define R       "\033[1;31m"
#define G       "\033[1;32m"
#define Y       "\033[1;33m"
#define B       "\033[1;34m"
#define EOC     "\033[0;0m"

#include <iostream>
#include <string>

/*
    WrongAnimal class
*/
class   WrongAnimal
{
    protected:
        std::string type;                   // Inherited memver variable

    public:
        WrongAnimal();                      // Default constructor
        virtual ~WrongAnimal();             // Destrutor
        std::string getType() const;        // Member function
        virtual void makeSound() const;     // Over-riding function
};

#endif
