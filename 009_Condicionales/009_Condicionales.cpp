// 009_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");

    int opcion;
    double num1, num2, resultado;
    char continuar;
do{
    cout << "Calculadora" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "5. Valor Absoluto" << endl;
    cout << "6. Mayor y Menor que" << endl;
    cout << "Elige una opción (1-6): ";
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "Ingresa dos números: ";
        cin >> num1 >> num2;
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case 2:
        cout << "Ingresa dos números: ";
        cin >> num1 >> num2;
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case 3:
        cout << "Ingresa dos números: ";
        cin >> num1 >> num2;
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case 4:
        cout << "Ingresa dos números: ";
        cin >> num1 >> num2;
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        }
        else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
        break;
    case 5:
        cout << "Ingresa un número: ";
        cin >> num1;
        resultado = abs(num1);
        cout << "Valor Absoluto: " << resultado << endl;
        break;
    case 6:
        cout << "Ingresa dos números: ";
        cin >> num1 >> num2;
        if (num1 > num2) {
            cout << num1 << " es mayor que " << num2 << endl;
        }
        else if (num1 < num2) {
            cout << num1 << " es menor que " << num2 << endl;
        }
        else {
            cout << "Los números son iguales." << endl;
        }
        break;
    default:
        cout << "Opción inválida. Por favor, elige una opción válida (1-6)." << endl;
    }

    cout << "¿Deseas realizar otra operación? (s/n): ";
    cin >> continuar;
} while (continuar == 's' || continuar == 'S');

cout << "¡Hasta luego!" << endl;

return 0;
}

