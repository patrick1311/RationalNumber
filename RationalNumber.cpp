//
//  RationalNumber.cpp
//  Project
//
//  Created by Patrick Quach on 5/14/16.
//  Copyright © 2016 Patrick Quach. All rights reserved.
//

#include <iostream>
#include "RationalNumber.h"
using namespace std;

RationalNumber::RationalNumber(int n, int d)
{
    if(d == 0)
    {
        numerator = n;
        cout<<"Error! Denominator cannot be 0! Initializing denominator = 1"<<endl;
        denominator = 1;
        simplify(numerator, denominator);
    }
    else if(d < 0){
        //if denominator is negative, switch the sign to numerator
        numerator = -1 * n;
        denominator = -1 * d;
        simplify(numerator, denominator);
    }
    else{
        numerator = n;
        denominator = d;
        simplify(numerator, denominator);
    }
}

int RationalNumber::gcd(int a, int b)   //gcd for simplification
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

void RationalNumber::simplify(int num, int den)
{
    numerator = num/gcd(num, den);
    denominator = den/gcd(num, den);
}

RationalNumber RationalNumber::operator+(RationalNumber &anotherRat)
{
    RationalNumber sum;
    sum.numerator = (numerator * anotherRat.denominator) + (denominator * anotherRat.numerator);
    sum.denominator = denominator * anotherRat.denominator;
    return sum;
}

RationalNumber RationalNumber::operator-(RationalNumber &anotherRat)
{
    RationalNumber difference;
    difference.numerator = (numerator * anotherRat.denominator) - (denominator * anotherRat.numerator);
    difference.denominator = denominator * anotherRat.denominator;
    return difference;
}

RationalNumber RationalNumber::operator*(RationalNumber &anotherRat)
{
    RationalNumber product;
    product.numerator = numerator * anotherRat.numerator;
    product.denominator = denominator * anotherRat.denominator;
    return product;
}

RationalNumber RationalNumber::operator/(RationalNumber &anotherRat)
{
    RationalNumber quotient;
    quotient.numerator = numerator * anotherRat.denominator;
    quotient.denominator = denominator * anotherRat.numerator;
    return quotient;
}

RationalNumber RationalNumber::operator=(const RationalNumber &anotherRat)
{
    numerator = anotherRat.numerator;
    denominator = anotherRat.denominator;
    simplify(numerator, denominator);
    return *this;
}

bool RationalNumber::operator>(const RationalNumber &anotherRat)
{   //check both numerators
    if((numerator * anotherRat.denominator) > (denominator * anotherRat.numerator))
        return true;
    return false;
}

bool RationalNumber::operator<(const RationalNumber &anotherRat)
{   //check both numerators
    if((numerator * anotherRat.denominator) < (denominator * anotherRat.numerator))
        return true;
    return false;
}

bool RationalNumber::operator==(const RationalNumber &anotherRat)
{   //check both numerators
    if((numerator * anotherRat.denominator) == (denominator * anotherRat.numerator))
        return true;
    return false;
}

bool RationalNumber::operator!=(const RationalNumber &anotherRat)
{   //check both numerators
    if((numerator * anotherRat.denominator) != (denominator * anotherRat.numerator))
        return true;
    return false;
}

bool RationalNumber::operator>=(const RationalNumber &anotherRat)
{   //check both numerators
    if((numerator * anotherRat.denominator) >= (denominator * anotherRat.numerator))
        return true;
    return false;
}

bool RationalNumber::operator<=(const RationalNumber &anotherRat)
{   //check both numerators
    if((numerator * anotherRat.denominator) <= (denominator * anotherRat.numerator))
        return true;
    return false;
}

ostream &operator<<(ostream &output, RationalNumber &ratNum)
{
    output << ratNum.numerator << "/" << ratNum.denominator;
    return output;
}

