// 007 _Decisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int n; // Número de peleadores
    int sistema; // Sistema de combate (1: Royal Rumble, 2: Eliminatoria directa, 3: Grupos)

    std::cout << "Ingrese el número de peleadores: ";
    std::cin >> n;
    std::cout << "Seleccione el sistema de combate:\n";
    std::cout << "1. Royal Rumble\n";
    std::cout << "2. Eliminatoria directa\n";
    std::cout << "3. Grupos, semifinal y final\n";
    std::cin >> sistema;

    int numBatallas;

    switch (sistema) {
    case 1:
        numBatallas = 1;
        std::cout << "El número total de batallas en un Royal Rumble es: " << numBatallas << "\n";
        break;
    case 2:
        numBatallas = n - 1;
        std::cout << "El número total de batallas en una Eliminatoria directa es: " << numBatallas << "\n";
        break;
    case 3:
        int numGrupos;
        std::cout << "Ingrese el número de grupos: ";
        std::cin >> numGrupos;
        numBatallas = (numGrupos * (numGrupos - 1)) / 2;
        std::cout << "El número total de batallas en un torneo con grupos, semifinal y final es: " << numBatallas << "\n";
        break;
    default:
        std::cout << "Opción de sistema de combate no válida.\n";
    }

}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
