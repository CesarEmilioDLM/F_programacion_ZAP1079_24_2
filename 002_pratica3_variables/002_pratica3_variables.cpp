// 002_pratica3_variables.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>

int main()
{
    setlocale(LC_ALL,"es_MX.UTF-8");

    bool a = true;
    bool b = true;
    bool c = true;
    c = a + b;
    std::cout << "la suma de booleanos da " << c << "\n";
    
    bool a1 = a - b;
    std::cout << "la resta de booleanos da " << c << "\n";

    bool a2 = a * b;
    std::cout << "la multiplicacion de booleanos da " << c << "\n";

    bool a3 = a / b;
    std::cout << "la multiplicacion de booleanos da " << c << "\n";

    bool bandera = true;
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
            std::cout << money;

}
