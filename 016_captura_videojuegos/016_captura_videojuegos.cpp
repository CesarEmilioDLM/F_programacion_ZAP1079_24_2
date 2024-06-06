// 016_captura_videojuegos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//



#include <iostream>
#include <string>
#include <cctype> // Para usar la función isdigit
using namespace std;

struct Videojuego {
    string nombre;
    int anioPublicacion;
    string autor;
    string estudio;
};

int main() {

    setlocale(LC_ALL, "es_MX.UTF-8");


    const int TAMANIO_ARREGLO = 3; // Tamaño del arreglo (3 juegos)
    Videojuego videojuegos[TAMANIO_ARREGLO];

    // Captura los datos de los videojuegos
    for (int i = 0; i < TAMANIO_ARREGLO; ++i) {
        cout << "Videojuego #" << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore(); // Ignora el salto de línea anterior
        getline(cin, videojuegos[i].nombre); // Captura el nombre con espacios

        // Captura el año de publicación (validación)
        bool esNumero = false;
        do {
            cout << "Año de publicación: ";
            string entradaAnio;
            getline(cin, entradaAnio);
            esNumero = true;
            for (char c : entradaAnio) {
                if (!isdigit(c)) {
                    esNumero = false;
                    break;
                }
            }
            if (esNumero) {
                videojuegos[i].anioPublicacion = stoi(entradaAnio);
            }
            else {
                cout << "Por favor, ingresa un número válido." << endl;
            }
        } while (!esNumero);

        cout << "Autor: ";
        cin.ignore(); // Ignora el salto de línea anterior
        getline(cin, videojuegos[i].autor); // Captura el autor con espacios
        cout << "Estudio que lo creó: ";
        cin.ignore(); // Ignora el salto de línea anterior
        getline(cin, videojuegos[i].estudio); // Captura el estudio con espacios
    }

    // Muestra los datos almacenados
    cout << "\nInformación de los videojuegos:\n";
    for (int i = 0; i < TAMANIO_ARREGLO; ++i) {
        cout << "Videojuego #" << i + 1 << endl;
        cout << "Nombre: " << videojuegos[i].nombre << endl;
        cout << "Año de publicación: " << videojuegos[i].anioPublicacion << endl;
        cout << "Autor: " << videojuegos[i].autor << endl;
        cout << "Estudio que lo creó: " << videojuegos[i].estudio << endl;
        cout << endl;
    }

    return 0;
}
//toooodooooo
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
