#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
class Fraction
{

    private:

        int top ;
        int bot ;
        float value;
    public:
        Fraction();
        string strNum ;
        Fraction operator +  (const Fraction& right);
        Fraction operator -  (const Fraction& right);
        Fraction operator *  (const Fraction& right);
        Fraction operator /  (const Fraction& right);
        bool operator     <  (const Fraction& right);
        bool operator     >  (const Fraction& right);
        bool operator     == (const Fraction& right);
        bool operator     <= (const Fraction& right);
        bool operator     >= (const Fraction& right);
        friend istream& operator>> (istream& input, Fraction& Fraction );
        friend ostream& operator<< (ostream& output,const Fraction& fraction);
        void simplfy();
        int cmnFact(int pTop, int pBot);
        void setTop(int pTop);
        int getTop ();
        void setBot(int pBot);
        int getBot();
        void setValue();
        float getValue();

};

#endif
