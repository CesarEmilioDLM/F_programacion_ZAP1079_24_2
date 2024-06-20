// 012_Bucles_(WHILE-DO WHILE-FOR).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <thread>
#include <chrono>

int main() {
    int vidas = 3;

    while (vidas > 0) {
        std::cout << "Tienes " << vidas << " vidas." << std::endl;
        std::cout << "¿Quieres continuar? (s/n): ";
        char respuesta;
        std::cin >> respuesta;

        if (respuesta == 's' || respuesta == 'S') {
            vidas--;
        }
        else {
            break;
        }
    }

    if (vidas == 0) {
        std::cout << "¡Has perdido todas tus vidas!" << std::endl;

        // Contador de tiempo
        int segundos = 100;
        std::cout << "Comenzando el contador de tiempo..." << std::endl;

        for (int i = segundos; i >= 0; i--) {
            std::cout << "Tiempo restante: " << i << " segundos" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        std::cout << "¡Fin del contador!" << std::endl;
    }

    return 0;
}
