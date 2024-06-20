// 005_operadores_aritmeticos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int a = 5;
    int b = 7;

    // Suma
    int suma = a + b;
    std::cout << "La suma de " << a << " y " << b << " es: " << suma << std::endl;

    // Resta
    int resta = a - b;
    std::cout << "La resta de " << a << " y " << b << " es: " << resta << std::endl;

    // Multiplicación
    int multiplicacion = a * b;
    std::cout << "La multiplicación de " << a << " y " << b << " es: " << multiplicacion << std::endl;

    // División
    double division = static_cast<double>(a) / b;
    std::cout << "La división de " << a << " entre " << b << " es: " << division << std::endl;

    // Potencia
    double potencia = std::pow(a, b);
    std::cout << a << " elevado a la potencia " << b << " es: " << potencia << std::endl;

    return 0;
}
