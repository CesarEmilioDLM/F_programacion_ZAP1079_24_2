// 008_Bucles_WHILE-DO_WHILE-FOR.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main() {
	//si el valor se modifica a un numero mayor a 10 pasara a ser un valor invalido
	for (int i = 1; i <= 10; i++) {
		std::cout << "el valor es valido" << std::endl;

	}
	int a = 10; 
	while (a < 30)
	{
		std::cout << "el valor es : " << a << std::endl;
		a++;
	}
	int b = 15;
	do {
		std::cout << "el valor es : " << b << std::endl;
		b++;
	} while (b < 10);


}