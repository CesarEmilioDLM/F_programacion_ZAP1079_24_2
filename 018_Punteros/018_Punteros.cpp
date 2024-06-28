#include <iostream>
#include <vector>
#include <cstdlib> // Para generar números aleatorios
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");


    char opcion; // Variable para almacenar la opción del usuario

    do {
        int filas, columnas;

        cout << "Ingrese el número de filas: ";
        cin >> filas;

        cout << "Ingrese el número de columnas: ";
        cin >> columnas;

        // Crear la matriz
        vector<vector<int>> matriz(filas, vector<int>(columnas));

        // Llenar la matriz
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                if (filas <= 3 && columnas <= 3) {
                    cout << "Ingrese el valor para la posición (" << i << ", " << j << "): ";
                    cin >> matriz[i][j];
                }
                else {
                    // Generar valor aleatorio entre 1 y 100
                    matriz[i][j] = rand() % 100 + 1;
                }
            }
        }

        // Mostrar la matriz
        cout << "Matriz generada:" << endl;
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }

        // Preguntar si desea repetir
        cout << "¿Desea generar otra matriz? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "¡Hasta luego!" << endl;

    return 0;
}
