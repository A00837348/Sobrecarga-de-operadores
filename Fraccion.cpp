#include "Fraccion.h"

Fraccion::Fraccion(int num, int den) : numerador(num), denominador(den) {
    reducirFraccion();
}

int Fraccion::mcd(int a, int b) {
    return b == 0 ? a : mcd(b, a % b);
}

void Fraccion::reducirFraccion() {
    int divisor = mcd(numerador, denominador);
    numerador /= divisor;
    denominador /= divisor;
    if (denominador < 0) {
        numerador = -numerador;
        denominador = -denominador;
    }
}

Fraccion Fraccion::operator+(const Fraccion& otra) const {
    int nuevoDenominador = denominador * otra.denominador;
    int nuevoNumerador = numerador * otra.denominador + otra.numerador * denominador;
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::operator-(const Fraccion& otra) const {
    int nuevoDenominador = denominador * otra.denominador;
    int nuevoNumerador = numerador * otra.denominador - otra.numerador * denominador;
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::operator*(const Fraccion& otra) const {
    int nuevoNumerador = numerador * otra.numerador;
    int nuevoDenominador = denominador * otra.denominador;
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::operator/(const Fraccion& otra) const {
    int nuevoNumerador = numerador * otra.denominador;
    int nuevoDenominador = denominador * otra.numerador;
    return Fraccion(nuevoNumerador, nuevoDenominador);
}

bool Fraccion::operator==(const Fraccion& otra) const {
    return numerador == otra.numerador && denominador == otra.denominador;
}

bool Fraccion::operator>(const Fraccion& otra) const {
    return numerador * otra.denominador > otra.numerador * denominador;
}

bool Fraccion::operator<(const Fraccion& otra) const {
    return numerador * otra.denominador < otra.numerador * denominador;
}

std::ostream& operator<<(std::ostream& out, const Fraccion& fract) {
    out << fract.numerador << "/" << fract.denominador;
    return out;
}