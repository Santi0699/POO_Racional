#include "Racional.h"

Racional::Racional(int num, int den) : numerador(num), denominador(den) {}

Racional::Racional(int n, int d)
{

}

Racional::Racional(int n)
{

}

Racional::Racional()
{

}

Racional::~Racional()
{

}

ostream& operator<<(ostream& os, const Racional& r)
{
    os<<r.numerador<<"/"<<r.denominador;
    return os;
}

Racional Racional::operator+( const Racional& r) const
{
    int numNuevo= numerador*r.denominador+r.numerador+denominador;
    int denNuevo= denominador*r.denominador;
    Racional result(numNuevo,denNuevo);
    return result;
}

Racional Racional::operator-( const Racional& r) const
{
    int numNuevo= numerador*r.denominador-r.numerador+denominador;
    int denNuevo= denominador*r.denominador;
    Racional result(numNuevo,denNuevo);
    return result;

}

Racional Racional::operator*( const Racional& r) const
{   
    int numNuevo= numerador*r.numerador;
    int denNuevo= denominador*r.denominador;
    Racional result(numNuevo,denNuevo);
    return result;

}

Racional Racional::operator/( const Racional& r) const
{
    int numNuevo= numerador*r.denominador;
    int denNuevo= denominador*r.numerador;
    Racional result(numNuevo,denNuevo);
    return result;

}

Racional Racional::operator-()const
{
    return Racional(-numerador,denominador);
}

Racional Racional::operator+() const 
{
    return *this;
}

Racional& Racional::operator++() {
    numerador += denominador;   // suma 1 entero = d/d
    return *this;
}

Racional Racional::operator++(int) 
{
    Racional temp(*this);
    numerador += denominador;
    return temp;
}

Racional Racional::operator--(int) {
    Racional temp(*this);
    numerador += denominador;
    return temp;
}