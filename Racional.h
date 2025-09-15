#ifndef RACIONAL_H
#define RACIONAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Racional
{
public:
    Racional(int n, int d);
    Racional(int n);
    Racional();
    ~Racional();
    friend ostream& operator<<(ostream& os, const Racional& r);
    Racional operator+(const Racional& r)const;
    Racional operator-( const Racional& r) const;
    Racional operator*( const Racional& r) const;
    Racional operator/( const Racional& r) const;
    Racional operator-()const;
    Racional operator+() const;
    Racional& operator++();//post
    Racional operator++(int);
    Racional& operator--();
    Racional operator--(int);
private:
int numerador;
int denominador;

};

#endif