#ifndef  FRACTIONCALCULATOR_H
#define  FRACTIONCALCULATOR_H
#include <iostream>
#include "Fraction.h"
using namespace std;
class  FractionCalculator
{
    public:
         FractionCalculator();
         void compResult(bool status);
         void mainMenuMsg();
         void compareMenuMsg();
         void mainMenu();
         void compareMenu(Fraction& num1, Fraction& num2);
    private:
        Fraction resFraction;

};

#endif //  FRACTIONCALCULATOR_H
