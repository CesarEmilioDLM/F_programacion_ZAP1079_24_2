// p002_valor_absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    char respuesta;

    do {
        float valor;
        cout << "Escribe un número: ";
        cin >> valor;

        if (valor < 0) {
            valor = -valor;
        }

        cout << "El valor absoluto es " << valor << endl;

        cout << "¿Quieres ingresar otro número? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    cout << "¡Hasta luego!" << endl;

    return 0;
}
