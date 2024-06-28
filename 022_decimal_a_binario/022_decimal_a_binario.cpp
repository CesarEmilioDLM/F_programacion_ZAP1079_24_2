#include <iostream>
#include <locale>
#include <string>

using namespace std;

string binario(int n) {
    string resultado;
    while (n > 0) {
        resultado = to_string(n % 2) + resultado;
        n /= 2;
    }
    return resultado;
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int numero;
    char respuesta;

    do {
        cout << "Ingrese un número entero positivo: ";
        while (!(cin >> numero) || numero < 0) {
            cout << "Por favor, ingrese un número entero positivo: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Número: " << numero << endl;
        cout << "Binario: " << binario(numero) << endl;

        cout << "¿Desea ingresar otro número? (s/n): ";
        while (!(cin >> respuesta) || (respuesta != 's' && respuesta != 'n')) {
            cout << "Por favor, ingrese 's' para sí o 'n' para no: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (respuesta == 's');

    return 0;
}