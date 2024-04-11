// 002_pratica3_variables.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <locale>

int main()
{
    setlocale(LC_ALL,"es_MX.UTF-8");
// bool tiene suma resta divsion y multiplicacion
// int tiene
    //char tiene
    //double
    //float 
    //string
    
    std::cout << "El valor de la variable booleana llamada bandera es: " << bandera << std::endl;
    int edad = 0;
    std::cout << "El valor de la variable entera llamada edad es: " << edad << std::endl;
    std::cout << "¿Cuál es tu edad? \n";
    std::cin >> edad;
    std::cout << std::endl;
    std::cout << "Entonces tienes: " << edad << " años\n";
    
    float peso = 0;
        std::cout << "escribe tu peso en kilos: " << peso << std::endl;
        std::cin >> peso;
        std::cout << std::endl;
        std::cout << "Entonces pesas: " << peso << " peso\n";
        
        char food[10] = "";
        std::cout << "comida favorita";
        std::cin >> food;
        std::cout << "tu comida favorita:";
        std::cout << food;

    double money = 0;
        std::cout << "dinero de jeff bessos";
            std::cin >> money;
            std::cout << "el dinero de jeef es:";
            std::cout << money <<std::endl;

                
                std::string apodo;
                std::cout << "cual es tu apodo\n";
                std::cin >> apodo;
                std::string nombre;
                std::cout << "y cual es tu nombre\n";
                std::cin >> nombre; 


                    

}
