// LibreriaEstatica.cpp

#include "MathLibrary.h"
#include <cstdlib>
#include <ctime>

void PrimitivaGenerator::generarNumerosPrimitiva(int numerosPrimitiva[], int& reintegro) {
    // Inicializar el generador de números aleatorios
    srand(time(nullptr));

    // Generar 6 números únicos de la primitiva (del 1 al 49)
    for (int i = 0; i < 6; ++i) {
        int numero;
        bool repetido;
        do {
            numero = rand() % 49 + 1;
            repetido = false;
            for (int j = 0; j < i; ++j) {
                if (numerosPrimitiva[j] == numero) {
                    repetido = true;
                    break;
                }
            }
        } while (repetido);
        numerosPrimitiva[i] = numero;
    }

    // Ordenar los números generados (para facilitar la lectura)
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 6; ++j) {
            if (numerosPrimitiva[i] > numerosPrimitiva[j]) {
                int temp = numerosPrimitiva[i];
                numerosPrimitiva[i] = numerosPrimitiva[j];
                numerosPrimitiva[j] = temp;
            }
        }
    }

    // Generar reintegro (del 0 al 9)
    reintegro = rand() % 10;
}
