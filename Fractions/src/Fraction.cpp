#include "Fraction.h"

Fraction::Fraction()
{
    top =0;
    bot = 0;
    value = 0;
}
int Fraction:: cmnFact(int pTop, int pBot){
    if (pBot == 0)
        return pTop;
    return cmnFact(pBot,pTop % pBot);
}
Fraction Fraction:: operator + (const Fraction& right){
    Fraction result;
    result.top = (top * right.bot) + (bot * right. top);
    result.bot = bot * right.bot;
    result.simplfy();
    result.setValue();
    return result;
}
Fraction Fraction:: operator - (const Fraction& right){
    Fraction result;
    result.top = (top * right.bot) - (bot * right.top);
    result.bot = bot * right.bot;
    result.simplfy();
    result.setValue();
    return result;
}
Fraction Fraction::operator* (const Fraction& right){
    Fraction result;
    result.top = (top * right.top);
    result.bot = (bot * right.bot);
    result.simplfy();
    result.setValue();
    return result;
}
Fraction Fraction :: operator/ (const Fraction& right){
    int temp;
    Fraction cpyRight;
    temp = right.top;
    cpyRight.top = right.bot;
    cpyRight.bot = temp;
    Fraction result;
    result = *this * cpyRight;
    return result;
}
bool Fraction:: operator< (const Fraction& right){
    return (value < right.value);
}

bool Fraction:: operator> (const Fraction& right){
    return (value > right.value);
}
bool Fraction:: operator== (const Fraction& right){
    return (value == right.value);
}
bool Fraction:: operator<= (const Fraction& right){
    return (value <= right.value);
}
bool Fraction:: operator>= (const Fraction& right){
    return (value >= right.value);
}

void Fraction::simplfy(){
    int comonFact = cmnFact(top,bot);
    top /= comonFact;
    bot/= comonFact;
    value = (float)top / (float)bot;
}
istream& operator >> (istream& input, Fraction& fraction ){
    input>> fraction.strNum;
    int cnt = 0;
    for (int i =0; i<fraction.strNum.length(); i++){
        if (fraction.strNum[i] != '/')
            cnt++;
        else
            break;
    }
    string strTop;
    for (int i = 0; i<cnt; i++){
        strTop += fraction.strNum[i];
    }
    stringstream intTop(strTop);
    intTop >> fraction.top;
    string strBot;
    for (int i = cnt+1; i < fraction.strNum.length(); i++){
        strBot += fraction.strNum[i];
    }
    stringstream intBot(strBot);
    intBot >> fraction.bot;
    fraction.simplfy();
    return input;
}
ostream& operator << (ostream& output, const Fraction& fraction){
    if (fraction.bot == 1)
        cout<< fraction.top<<endl;
    else
        cout<<fraction.top << '/' << fraction.bot<<endl;
//    cout<<fraction.value<<endl;
return output;
}

void Fraction:: setTop(int pTop){
    top = pTop;
}
int Fraction:: getTop (){
    return top;
}
void Fraction:: setBot(int pBot){
    bot = pBot;
}
int Fraction::  getBot(){
    return bot;
}
void Fraction:: setValue(){
    value = (float)top / (float)bot;
}
float Fraction:: getValue(){
    return value;
}

