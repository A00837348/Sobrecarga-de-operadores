#include <iostream>
#include "Fraccion.h"

int main() {
    Fraccion f1(1, 2);
    Fraccion f2(1, 3);

    Fraccion suma = f1 + f2;
    Fraccion resta = f1 - f2;
    Fraccion multiplicacion = f1 * f2;
    Fraccion division = f1 / f2;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicacion: " << multiplicacion << std::endl;
    std::cout << "Division: " << division << std::endl;

    std::cout << "f1 == f2? " << (f1 == f2 ? "true" : "false") << std::endl;
    std::cout << "f1 > f2? " << (f1 > f2 ? "true" : "false") << std::endl;
    std::cout << "f1 < f2? " << (f1 < f2 ? "true" : "false") << std::endl;

    return 0;
}