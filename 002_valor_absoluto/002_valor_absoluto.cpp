

#include <iostream>
#include <cmath>
#include <locale>
int main()
//se debe de encontrar el valor absoluto de un numero,para encontrar dicho valor debo de hacer que el numero positivo se mantenga asi y un numero negativo pase a positivo
//datos de entrada: numero
//datos de salida: valor absoluto
//proceso=numero *(-1)

{
  
    double numero;
    std::cout << "ingresa tu numero en negativo";
    std::cin >> numero;
    double numpos = numero * (-1);

    std::cout << " tu numero negativo ahora esta en positivo " << numpos << std::endl ;

  
    }

