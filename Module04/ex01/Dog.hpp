#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
    Brain* brain;
    public:
        Dog( void );
        Dog( const Dog& );
        ~Dog();

        void makeSound( void ) const;

        Dog& operator=( const Dog& );
};



#endif