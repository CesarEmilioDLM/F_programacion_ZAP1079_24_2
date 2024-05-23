// 009_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>


int main() {
    // Valor Absoluto
    float numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;
    float absoluto = std::abs(numero);
    std::cout << "El valor absoluto de " << numero << " es " << absoluto << std::endl;

    // Mayor y Menor que
    float a, b;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> a >> b;
    if (a > b) {
        std::cout << a << " es mayor que " << b << std::endl;
    }
    else if (a < b) {
        std::cout << a << " es menor que " << b << std::endl;
    }
    else {
        std::cout << "Los numeros son iguales" << std::endl;
    }
    return 0;
}