

#include <iostream>
#include <cmath>
#include <locale>
int main()
//se debe de encontrar el valor absoluto de un numero,para encontrar dicho valor debo de hacer que el numero positivo se mantenga asi y un numero negativo pase a positivo
//datos de entrada: numero
//datos de salida: valor absoluto
//proceso=numero *(-1)

{double numero;
std::cout << "Ingresa tu numero: ";
std::cin >> numero;

if (numero >= 0) {
    std::cout << "El numero ingresado es positivo y se mantiene igual: " << numero << std::endl;
}
else {
    double numpos = -numero;
    std::cout << "El numero ingresado era negativo, ahora esta en positivo: " << numpos << std::endl;
}

return 0;
}
