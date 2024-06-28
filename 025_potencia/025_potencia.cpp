#include <iostream>
#include <limits> // para usar std::numeric_limits
#include <locale>

int potencia(int base, int exponente) {
    /**
     * Calcula la potencia de un número usando recursividad.
     *
     * @param base El número base.
     * @param exponente El exponente.
     * @return El resultado de la potencia.
     */
    if (exponente == 0) {
        // Caso base: cualquier número elevado a la potencia 0 es 1
        return 1;
    }
    else {
        // Llamada recursiva: se llama a sí misma con exponente - 1
        // y se multiplica el resultado por la base
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int base, exponente;
    bool valido = false;

    while (!valido) {
        std::cout << "Ingrese la base: ";
        if (std::cin >> base) {
            valido = true;
        }
        else {
            std::cout << "Error: ingrese un número válido.\n";
            std::cin.clear(); // limpiar el buffer de entrada
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignorar el resto de la línea
        }
    }

    valido = false;
    while (!valido) {
        std::cout << "Ingrese el exponente: ";
        if (std::cin >> exponente) {
            valido = true;
        }
        else {
            std::cout << "Error: ingrese un número válido.\n";
            std::cin.clear(); // limpiar el buffer de entrada
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignorar el resto de la línea
        }
    }

    int resultado = potencia(base, exponente);
    std::cout << "El resultado es: " << resultado << std::endl;

    char respuesta;
    std::cout << "¿Desea calcular otra potencia? (s/n): ";
    std::cin >> respuesta;

    while (respuesta != 's' && respuesta != 'n') {
        std::cout << "Error: ingrese 's' para sí o 'n' para no.\n";
        std::cout << "¿Desea calcular otra potencia? (s/n): ";
        std::cin >> respuesta;
    }

    if (respuesta == 's') {
        main(); // llamar a main nuevamente para reiniciar el programa
    }
    else {
        std::cout << "Adiós!\n";
    }

    return 0;
}