#include <iostream>
#include <random>
#include <ctime>

void imprimirMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "[" << matriz[i][j] << "]";
        }
        std::cout << std::endl;
    }
}

int** crearMatriz(int filas, int columnas) {
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; ++i) {
        matriz[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 10;
        }
    }
    return matriz;
}

void liberarMatriz(int** matriz, int filas) {
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int opcion;
    int** matriz;
    int filas, columnas;

    do {
        std::cout << "Selecciona la matriz:\n1) 3x3\n2) 5x5\n3) 10x10\n0) Salir\n";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            filas = columnas = 3;
            break;
        case 2:
            filas = columnas = 5;
            break;
        case 3:
            filas = columnas = 10;
            break;
        case 0:
            return 0;
        default:
            std::cout << "Por favor ingresa un valor válido.\n";
            continue;
        }

        matriz = crearMatriz(filas, columnas);
        imprimirMatriz(matriz, filas, columnas);
        liberarMatriz(matriz, filas);

    } while (opcion != 0);

    return 0;
}
