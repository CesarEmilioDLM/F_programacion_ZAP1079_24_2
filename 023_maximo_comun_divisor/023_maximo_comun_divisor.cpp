#include <iostream>
#include <cmath>
#include <locale>


int gcdRecursive(int a, int b) {
    a = std::abs(a);
    b = std::abs(b);

    if (a == 0) {
        return b;
    }
    else if (b == 0) {
        return a;
    }
    else if (a > b) {
        return gcdRecursive(a - b, b);
    }
    else {
        return gcdRecursive(a, b - a);
    }
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    char respuesta;
    do {
        int num1, num2;
        std::cout << "Ingrese el primer número: ";
        std::cin >> num1;
        std::cout << "Ingrese el segundo número: ";
        std::cin >> num2;

        int resultado = gcdRecursive(num1, num2);
        std::cout << "El Máximo Común Divisor de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}