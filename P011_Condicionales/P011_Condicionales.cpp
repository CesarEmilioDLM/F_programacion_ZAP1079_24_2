// P011_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.




//proteccion de codigo
#include <iostream>
#include <locale>
#include <string>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << " elije uno de los siguientes deportes: futbol, futbol americano, tenis, volleyball y basketball. voy a tener que adivinar cual es: ";
    char comodin;
    std::cout << "¿tiene porteria?";
    std::cin >> comodin;
    std::string respuesta;
    if (comodin == "s") { std::cout << "el deporte es futbol"; }
    else {
        std::cout << " ¿se puede entrar al lado de la cancha del oponente? (s/n)";
        std::cin >> respuesta;

        if (respuesta == "s") {
            std::string respuesta2;
            std::cout << "¿el balon esta constantemente en las manos de los jugaders? (s/n)";
            std::cin >> respuesta2;
            if (respuesta2 == "s") {
                std::string respuesta21;
                std::cout << "¿el balon tiene que entrar en una canasta?";
                std::cin >> respuesta21;
                if (respuesta21 == "s") { std::cout << "tu deporte es basketball"; }
                else { std::cout << "tu deporte es futbol americano"; }
            }

        }
        else {
            std::string respuesta3;
            std::cout << "¿la pelota es mas grande que la mano de los jugadores? (s/n)";
            std::cin >> respuesta3;
            if (respuesta3 == "s") { std::cout << "el deporte es :volleyball"; }
            else { std::cout << "el deporte es: tenis"; }
        }
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
