#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

class Span
{
    size_t max;
    std::vector<int> arr;
    public:
        Span( unsigned int );
        Span( void );
        Span( const Span& );
        ~Span();

        struct NoNumberException : std::exception
        {
            virtual const char* what( void ) const throw();
        };
        struct AlreadyFull : std::exception
        {
            virtual const char* what( void ) const throw();
        };

        void addNumber( int );
        size_t shortestSpan( void );
        size_t longestSpan( void );

        Span& operator=( const Span& );
};



#endif