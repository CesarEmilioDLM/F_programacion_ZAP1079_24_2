// 014_Bucles_(WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <thread> // Necesario para std::this_thread::sleep_for
#include <chrono> // Necesario para std::chrono::milliseconds

int main() {
    for (int i = 1; i <= 100; ++i) {
        std::cout << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(90)); // Pausa de 1 segundo
    }
    // Contar usando un bucle for
    std::cout << "Contando con bucle for:" << std::endl;
    for (int i = 1000; i >= 0; --i) {
        std::cout << i << " ";
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Retraso de 10 milisegundos
    }
    std::cout << std::endl;

    // Contar usando un bucle while
    std::cout << "Contando con bucle while:" << std::endl;
    int j = 1000;
    while (j >= 0) {
        std::cout << j << " ";
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Retraso de 10 milisegundos
        --j;
    }
    std::cout << std::endl;

    // Contar usando un bucle do while
    std::cout << "Contando con bucle do while:" << std::endl;
    int k = 1000;
    do {
        std::cout << k << " ";
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Retraso de 10 milisegundos
        --k;
    } while (k >= 0);
    std::cout << std::endl;

    // Contador adicional de 10 en 10 hasta 100
    std::cout << "Contador adicional de 10 en 10 hasta 100:" << std::endl;
    for (int l = 0; l <= 100; l += 10) {
        std::cout << l << " ";
        std::this_thread::sleep_for(std::chrono::milliseconds(10)); // Retraso de 10 milisegundos
    }
    std::cout << std::endl;

    return 0;
}
