//
//  RationalNumber.h
//  Project
//
//  Created by Patrick Quach on 5/14/16.
//  Copyright © 2016 Patrick Quach. All rights reserved.
//

#ifndef RationalNumber_h
#define RationalNumber_h

#include <iostream>

class RationalNumber{
    friend std::ostream &operator<<(std::ostream &, RationalNumber &);
    
public:
    RationalNumber(int n = 1, int d = 1);       //default constructor
    RationalNumber operator+(RationalNumber &);
    RationalNumber operator-(RationalNumber &);
    RationalNumber operator*(RationalNumber &);
    RationalNumber operator/(RationalNumber &);
    RationalNumber operator=(const RationalNumber &);
    bool operator>(const RationalNumber &);
    bool operator<(const RationalNumber &);
    bool operator==(const RationalNumber &);
    bool operator!=(const RationalNumber &);
    bool operator>=(const RationalNumber &);
    bool operator<=(const RationalNumber &);
    int gcd(int , int );
    void simplify(int , int );
    
private:
    int numerator;
    int denominator;
};

#endif /* RationalNumber_h */
