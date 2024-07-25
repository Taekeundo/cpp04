#include "Animal.hpp"

/*  [F]
    Constructor
*/
Animal::Animal(void)
{
    std::cout << B << "[Animal]" << EOC << " Default constructor" << std::endl;
    this->type = "Animal";
}

/*  [F]
    Destructor
*/
Animal::~Animal(void)
{
    std::cout << B << "[Animal]" << EOC << " Destructor" << std::endl;
}

/*  [F]
    Copy constructor
*/
Animal::Animal(const Animal &rhs)
{
    std::cout << B << "[Animal]" << EOC << " Copy constructor" << std::endl;
    (*this) = rhs;
}

/*  [F]
    Overloaded assignment operator
*/
Animal& Animal::operator=(const Animal &rhs)
{
    std::cout << B << "[Animal]" << EOC << " Assignment operator" << std::endl;
    if (this != &rhs)
        this->type = rhs.type;
    return (*this);
}

/*  [F]
    Member function
*/
std::string Animal::getType() const
{
    return (this->type);
}

/*  [F]
    Over-riding function for child class
*/
void Animal::makeSound() const
{
    std::cout << B << "[Animal]" << EOC \
        << " Doesn't make sound " << std::endl;
}
