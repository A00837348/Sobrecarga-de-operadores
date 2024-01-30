#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>

class Fraccion {
private:
    int numerador;
    int denominador;

    int mcd(int a, int b);
    void reducirFraccion();

public:
    Fraccion(int num = 0, int den = 1);
    
    Fraccion operator+(const Fraccion& otra) const;
    Fraccion operator-(const Fraccion& otra) const;
    Fraccion operator*(const Fraccion& otra) const;
    Fraccion operator/(const Fraccion& otra) const;

    bool operator==(const Fraccion& otra) const;
    bool operator>(const Fraccion& otra) const;
    bool operator<(const Fraccion& otra) const;

    friend std::ostream& operator<<(std::ostream& out, const Fraccion& fract);
};

