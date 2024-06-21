#include <iostream>
#include <string>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::cout << "Piensa en uno de los siguientes deportes: futbol, futbol americano, tenis, volleyball o basketball." << std::endl;
    std::cout << "Responde las siguientes preguntas con '1' o '2':" << std::endl;

    int respuesta1, respuesta2, respuesta3;
    char input[10]; 

    while (true) {
        std::cout << "¿Tiene portería? (1 = sí, 2 = no): ";
        std::cin >> input;

        // Verificar si la entrada es un dígito
        if (isdigit(input[0])) {
            respuesta1 = std::stoi(input); // Convertir a entero
            if (respuesta1 == 1) {
                std::cout << "¿El balón está constantemente en las manos de los jugadores? (1 = sí, 2 = no): ";
                std::cin >> input;
                if (isdigit(input[0])) {
                    respuesta2 = std::stoi(input);
                    if (respuesta2 == 1) {
                        std::cout << "¿El balón tiene que entrar en una canasta? (1 = sí, 2 = no): ";
                        std::cin >> input;
                        if (isdigit(input[0])) {
                            respuesta3 = std::stoi(input);
                            if (respuesta3 == 1) {
                                std::cout << "Estás pensando en basketball." << std::endl;
                            }
                            else {
                                std::cout << "Estás pensando en futbol americano." << std::endl;
                            }
                        }
                        else {
                            std::cout << "Entrada no válida. Debes ingresar un número." << std::endl;
                        }
                    }
                }
                else {
                    std::cout << "Entrada no válida. Debes ingresar un número." << std::endl;
                }
            }
        }
        else {
            std::cout << "Entrada no válida. Debes ingresar un número." << std::endl;
        }
    }

    return 0;
}
