// 006_Estructuras_de_control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
int main()
{
  
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string nombre;
    std::string correo;
    std::string contrasena;
    std::string contrasena1;
    std::string nombre1;
    std::string correo1;
    // Solicitar nombre
    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;

    // Solicitar correo electrónico
    std::cout << "Ingrese su correo electrónico: ";
    std::cin >> correo;

    // Solicitar contraseña
    std::cout << "Ingrese su contraseña: ";
    std::cin >> contrasena;



    std::cout << "okay, si quieres empezar a jugar escribe todos tus datos(nombre, correo, contraseña) ";
    std::cin >> nombre1;
    std::cin >> correo1;
    std::cin >> contrasena1;

    if (nombre1 == nombre)
        std::cout << "¡nombre correcto " << nombre << "!" << std::endl;

    if (correo1 == correo)
        std::cout << "¡el correo electronico coincide " << nombre << "!" << std::endl;

    if (contrasena1 == contrasena)

        std::cout << "¡le atinaste " << nombre << "!" << std::endl;


    else {
        std::cout << "Datos incorrectos. No se reconoce el inicio de sesión." << std::endl;
    }

}

