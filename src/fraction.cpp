#include <iostream>

#include "../include/fraction.h"

Fraction& Fraction::operator= ( const Fraction& nf )
{
    this->m_nume = nf.m_nume;
    this->m_deno = nf.m_deno;

    return *this;
}

int Fraction::get_n( void ) const
{
    return m_nume;
}

int Fraction::get_d( void ) const
{
    return m_deno;
}

void Fraction::set_n( const int& n_nume )
{
    m_nume = n_nume;
}

void Fraction::set_d( const int& n_deno )
{
    m_deno = n_deno;
}

bool is_proper( const Fraction & a)
{
    return (a.get_n() < a.get_d());
}

bool is_zero( const Fraction & a)
{
    if(a.get_d() == 0 )
        std::cout << "Undetermination Denominator equal 0." << std::endl;
    return( a.get_n() == 0 &&
            a.get_d() != 0 );
}

int MakeProper( Fraction & a)
{
    int numerator{0};
    while(a.get_n() > a.get_d())
    {
        numerator = a.get_n()/a.get_d();
        a.set_n(numerator);
        std::cout << a.get_n() << " > " << a.get_d() << "\n";
    }
    return numerator;

}

bool is_reduce( const Fraction& a)
{
    int lower(0);
    if(a.get_d() < a.get_n())
        lower = a.get_d();
    else
        lower = a.get_n();
    while(lower <= 1)
    {
        if( a.get_d()%lower == 0 &&
            a.get_n()%lower == 0)
                return true;
        lower--;
    }
    return false;
}

void reduce( Fraction & a )
{
    int lower(0);
    int mdc{0};
    int n_mdc{0};
    int d_mdc{0};

    if(a.get_d() < a.get_n())
        lower = a.get_d();
    else
        lower = a.get_n();
    while(lower <= 1)
    {
        if( a.get_d()%lower == 0 &&
            a.get_n()%lower == 0)
                mdc = lower;

        lower--;
    }
    n_mdc = a.get_n();
    d_mdc = a.get_d();

    std::cout << "MDC" << mdc << " "<< n_mdc << " " << d_mdc ;
   /* a.set_d( n_mdc );
    a.set_n( d_mdc );*/
}

int mdc( const int &a , const int &b)
{
    int resto {0};
    do
    {
        resto = a/b;
        a = b
        b = resto;

    }while( b%rest == 0)
    return resto;
}

bool operator== ( const Fraction & a, const Fraction & b )
{
    return (a.get_d() == b.get_d() &&
            b.get_n() == b.get_n());
}
