// batalla_pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <locale>
int main() {

    setlocale(LC_ALL, "es_MX.UTF-8");

    char pkm;
    int vidaJugador = 150;
    int ataqueJugador = 20;
    int heal = 2;
    int vidaContrincante = 100;
    int ataqueContrincante = 25;

    std::cout << "Selecciona tu Pokémon:\n";
    std::cout << "a: Bulbo Sónico (tipo maleza)\n";
    std::cout << "b: Sprinkler (tipo aguado)\n";
    std::cout << "c: Carbonara (tipo fogoso)\n";
    std::cin >> pkm;

    if (pkm == 'a') {
        std::cout << "Las estadísticas de tu Pokémon son:\n";
        std::cout << "Vida: " << vidaJugador << "\n";
        std::cout << "Ataque: " << ataqueJugador << "\n";
    } else {
        if (pkm == 'b') {
            std::cout << "Las estadísticas de tu Pokémon son:\n";
            std::cout << "Vida: " << vidaJugador << "\n";
            std::cout << "Ataque: " << ataqueJugador << "\n";
        }
        if (pkm == 'c') {
            std::cout << "Las estadísticas de tu Pokémon son:\n";
            std::cout << "Vida: " << vidaJugador << "\n";
            std::cout << "Ataque: " << ataqueJugador << "\n";
        }
            // Otras opciones de Pokémon aquí (b y c)
    }

    std::cout << "Tu contrincante será Carbonara:\n";
    std::cout << "Vida: " << vidaContrincante << "\n";
    std::cout << "Ataque: " << ataqueContrincante << "\n";

    std::cout << "¡Que comience la pelea!\n";
    while (vidaJugador > 0 && vidaContrincante > 0) {
        char accion;
        std::cout << "¿Qué quieres hacer?\n";
        std::cout << "a. Atacar\n";
        std::cout << "b. curar (si te curas mas de una vez mueres, por listo)\n";
        std::cin >> accion;

        if (accion == 'a') {
            // Ataque del jugador
            vidaContrincante -= ataqueJugador;
            std::cout << "Has atacado al contrincante. Su vida ahora es: " << vidaContrincante << "\n";
        }
        else if (accion == 'b') {
            vidaJugador += 60;
            heal += -1;
            if (heal <=0) { vidaJugador = -10000000000;}
            std::cout << "Has decidido curarte" << vidaJugador << "\n";
        }
        else {
            std::cout << "Opción no válida. Inténtalo de nuevo.\n";
        }


        vidaJugador -= ataqueContrincante;
        std::cout << "El contrincante te ha atacado. Tu vida ahora es: " << vidaJugador << "\n";

    }

    if (vidaJugador <= 0) {
        std::cout << "¡Has perdido! La vida de tu Pokémon llegó a cero.\n";
    }
    else {
        std::cout << "¡Has ganado! La vida del contrincante llegó a cero.\n";
    }

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
