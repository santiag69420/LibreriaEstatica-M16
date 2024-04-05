// main.cpp

#include <iostream>
#include "MathLibrary.h"

int main() {
    int numerosPrimitiva[6];
    int reintegro;

    PrimitivaGenerator::generarNumerosPrimitiva(numerosPrimitiva, reintegro);

    std::cout << "Numeros de la primitiva:\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << numerosPrimitiva[i] << " ";
    }

    std::cout << "\nReintegro: " << reintegro << std::endl;

    return 0;
}

