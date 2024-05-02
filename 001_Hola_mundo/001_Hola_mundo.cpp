// 001_Hola_mundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <locale>
#include<string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");



    bool bandera = false;
    bool bandera2 = true;


    std::cout << "El valor de la variable booleana es: " << bandera << std::endl;
    std::cout << "El valor de la variable booleana es: " << bandera2 << std::endl;


    char comidafav = 1;

    
    std::cout << "cual es la inicial de tu comida fav " << comidafav << std::endl;
    std::cout << "¿Cual es la inicial de tu comida fav?" << std::endl;
    std::cin >> comidafav;
    std::cout << "Tu comida fav es " << comidafav << std::endl;



    int Edad = 0;


    std::cout << "El valor de la variable entera es: " << Edad << std::endl;
    std::cout << "¿Cual es tu edad? " << std::endl;
    std::cin >> Edad;
    std::cout << "Entonces tienes " << Edad << " años" << std::endl;


    float altura = 0;


    std::cout << "Tu mides " << altura << " metros" << std::endl;
    std::cout << "¿Cuanto mides?" << std::endl;
    std::cin >> altura;
    std::cout << "tu altura es" << altura << " metros" << std::endl;







    std::string insulto = "fyou";


    std::cout << insulto << std::endl;
    std::cin.ignore();
   
    //añadir getline
    //ignorar el buffer
    std::getline(std::cin, insulto);
    
    std::cout << "pues " << insulto << std::endl;





    float flo1 = 1;
    float flo2 = 1;




    std::cout << "que quieres sumar? (float)" << std::endl;
    std::cin >> flo1;
    std::cin >> flo2;
    float respsuma = flo1 + flo2;
    std::cout << "La suma es " << respsuma << std::endl;

    std::cout << "que quieres restar" << std::endl;
    std::cin >> flo1;
    std::cin >> flo2;
    float respresta = flo1 - flo2;
    std::cout << "La resta es " << respresta << std::endl;


    std::cout << "que quieres multiplicar" << std::endl;
    std::cin >> flo1;
    std::cin >> flo2;
    float respmult = flo1 * flo2;
    std::cout << "El producto es " << respmult << std::endl;

    std::cout << "que quieres dividir" << std::endl;
    std::cin >> flo1;
    std::cin >> flo2;
    float respdiv = flo1 / flo2;
    std::cout << "El cociente es " << respdiv << std::endl;

    std::cout << "que quieres elevar al cuadrado" << std::endl;
    std::cin >> flo1;
    float respelev = flo1 * flo1;
    std::cout << flo1 << " al cuadrado es " << respelev << std::endl;

    std::cout << "A que quieres quieres sacar la raiz cuadrada?" << std::endl;
    std::cin >> flo1;
    float cuad1 = sqrt(flo1);
    std::cout << "La Raiz Cuadrada de " << flo1 << " es " << cuad1 << std::endl;



    bool bool1 = 1;
    bool bool2 = 1;




    std::cout << "Ingresa los numeros a sumar (bool)" << std::endl;
    std::cin >> bool1;
    std::cin >> bool2;
    bool sumbool = bool1 + bool2;
    std::cout << "La suma es " << sumbool << std::endl;

    std::cout << "Ingresa los numeros a restar" << std::endl;
    std::cin >> bool1;
    std::cin >> bool2;
    bool resbool = bool1 - bool2;
    std::cout << "La resta es " << resbool << std::endl;


    std::cout << "Ingresa los numeros a multiplicar" << std::endl;
    std::cin >> bool1;
    std::cin >> bool2;
    bool prodbool = bool1 * bool2;
    std::cout << "El producto es " << prodbool << std::endl;

    std::cout << "Ingresa los numeros a dividir" << std::endl;
    std::cin >> bool1;
    std::cin >> bool2;
    bool divbool = bool1 / bool2;
    std::cout << "El cociente es " << divbool << std::endl;

    std::cout << "Ingresa el numero a elevar al cuadrado" << std::endl;
    std::cin >> bool1;
    bool elebool = bool1 * bool1;
    std::cout << bool1 << " al cuadrado es " << elebool << std::endl;


    short int int1 = 1;
    short int int2 = 1;




    std::cout << "que quieres quieressumar (int)" << std::endl;
    std::cin >> int1;
    std::cin >> int2;
    short int sumint = int1 + int2;
    std::cout << "La suma es " << sumint << std::endl;

    std::cout << "que quieres quieres restar" << std::endl;
    std::cin >> int1;
    std::cin >> int2;
    short int resint = int1 - int2;
    std::cout << "La resta es " << resint << std::endl;


    std::cout << "que quieres quieres multiplicar" << std::endl;
    std::cin >> int1;
    std::cin >> int2;
    short int prodint = int1 * int2;
    std::cout << "El producto es " << prodint << std::endl;

    std::cout << "que quieres quieres dividir" << std::endl;
    std::cin >> int1;
    std::cin >> int2;
    short int divint = int1 / int2;
    std::cout << "El cociente es " << divint << std::endl;

    std::cout << "que quieres quieres al cuadrado" << std::endl;
    std::cin >> int1;
    float elevint = int1 * int1;
    std::cout << int1 << " al cuadrado es " << elevint << std::endl;

    std::cout << "A que quieres quieres sacar la raiz cuadrada?" << std::endl;
    std::cin >> int1;
    float cuad2 = sqrt(int1);
    std::cout << "La Raiz Cuadrada de " << int1 << " es " << cuad2 << std::endl;




    char char1 = 'x', char2 = 'y', space1 = ' ', char3 = 'A', char4 = 9, char5 = 64;


    std::cout << char1 << space1 << char2 << std::endl;
    char1 = char1 + 1;
    char2 = char2 - 1;
    std::cout << char1 << space1 << char2 << std::endl;
    char1 = char3 * 4;
    char2 = char4 / 2;
    std::cout << char1 << space1 << char2 << std::endl;
    char1 = char3 * char3;
    char2 = sqrt(char4);
    std::cout << char1 << space1 << char2 << std::endl;

}