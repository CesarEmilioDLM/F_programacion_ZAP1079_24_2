// P010_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cctype>
#include <string>

bool esNumero(const std::string& cadena) {
    for (char const& c : cadena) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

bool esLetra(const std::string& cadena) {
    for (char const& c : cadena) {
        if (std::isalpha(c) == 0) return false;
    }
    return true;
}

int main() {
    std::string usuario, contrasena;

    std::cout << "Ingrese su nombre de usuario: ";
    std::cin >> usuario;
    if (!esLetra(usuario)) {
        std::cout << "El nombre de usuario solo debe contener letras." << std::endl;
        return 1;
    }

    std::cout << "Ingrese su contrasena: ";
    std::cin >> contrasena;
    if (!esNumero(contrasena)) {
        std::cout << "La contrasena solo debe contener numeros." << std::endl;
        return 1;
    }

    // Aquí iría la lógica para verificar las credenciales

    std::cout << "Bienvenido al juego, " << usuario << "!" << std::endl;
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
