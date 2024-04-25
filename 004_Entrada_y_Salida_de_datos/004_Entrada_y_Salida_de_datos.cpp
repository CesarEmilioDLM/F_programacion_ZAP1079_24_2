// 004_Entrada_y_Salida_de_datos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <locale>

//Realizar un consultorio médico el cual solicite
//3 bool ()
//2 string****
//1 char (nombre usuario)
//2 int 
//1 float
//Al final te entrega tu IMC

int main()

{
    setlocale(LC_ALL, "es_MX.UTF-8");


    
    // Variables
    bool esPesoValido = false;
    bool esAlturaValida = false;
    bool esGeneroValido = false;
    std::string nombre;
    std::string genero;
    char generoChar;
    int edad;
    int pesoKg;
    int alturaCm;
    float imc;

    // Solicitar información al usuario
    std::cout << "Bienvenido al consultorio médico." << std::endl;
    std::cout << "Por favor, ingrese su nombre: ";
    std::cin >> nombre;
    std::cout << "Ingrese su género (M/F): ";
    std::cin >> generoChar;
    genero = (generoChar == 'M' || generoChar == 'm') ? "masculino" : "femenino";
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    std::cout << "Ingrese su peso en kilogramos: ";
    std::cin >> pesoKg;
    std::cout << "Ingrese su altura en centímetros: ";
    std::cin >> alturaCm;




        float alturaMetros = (alturaCm) / 100.0;
        imc = pesoKg / (alturaMetros * alturaMetros);

        // Mostrar resultados
        std::cout << "\n--- Resultados ---" << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Género: " << genero << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Peso: " << pesoKg << " kg" << std::endl;
        std::cout << "Altura: " << alturaCm << " cm" << std::endl;
        std::cout << "IMC: " << imc << std::endl;
}

