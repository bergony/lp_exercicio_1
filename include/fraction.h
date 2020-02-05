#ifndef _Fraction_H_
#define _Fraction_H_

class Fraction
{
    private:
        int m_nume;
        int m_deno;
    public:
    //=== Special Members.
    ///Default Constructor.
    Fraction( int n = 0, int d = 1 )
        : m_nume{n} , m_deno { d }
    {           }
    ///Default Destructor.
    ~Fraction( void ) = default;
    ///Copy Constructor.
    Fraction( const Fraction & clone )
    {
        m_nume = clone.m_nume;
        m_deno = clone.m_deno;
    }
    ///Move Constructor.
    Fraction& operator= ( const Fraction& nf );

    //=== Accessors Members.
    /// Get Numerator
    int get_n( void ) const;
    /// Get Denominator.
    int get_d( void ) const;

    //=== Modifiers Members.
    /// Set Numerator.
    void set_n( const int& n_nume );
    /// Set Denominator.
    void set_d( const int& n_deno );

    ///== Method.
    // If the fraction is proper
    friend bool is_proper( const Fraction & );
    // If the fraction equal to zero
    friend bool is_zero( const Fraction & );
    //Make proper
    friend int MakeProper( Fraction & );
    // if the fraction can be reduce
    friend bool is_reduce( const Fraction & );
    friend void reduce( Fraction &);
    ///=== Operator Overload.
    // Operator ==
    friend bool operator==( const Fraction &, const Fraction & );
    friend int mdc( const int &, const int &);
};

#endif
