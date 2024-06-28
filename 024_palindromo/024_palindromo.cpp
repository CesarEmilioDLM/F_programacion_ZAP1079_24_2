#include <iostream>
#include <string>
#include <cctype>
#include <locale>

/**
 * Prepara una frase para ser verificada como palíndroma.
 * Elimina los espacios y convierte la frase a minúsculas.
 * @param frase La frase original que se va a preparar.
 * @return La frase preparada sin espacios y en minúsculas.
 */
std::string prepararFrase(const std::string& frase) {
    std::string frasePreparada;
    for (char c : frase) {
        // Ignora los espacios y los números
        if (!std::isspace(c) && !std::isdigit(c)) {
            // Convierte a minúsculas
            frasePreparada += std::tolower(c);
        }
    }
    return frasePreparada;
}

/**
 * Verifica si una frase es palíndroma.
 * @param frase La frase que se va a verificar.
 * @return true si la frase es palíndroma, false en caso contrario.
 */
bool esPalindroma(const std::string& frase) {
    std::string frasePreparada = prepararFrase(frase);
    int inicio = 0;
    int fin = frasePreparada.length() - 1;

    // Verifica si la frase preparada es palíndroma
    while (inicio < fin) {
        if (frasePreparada[inicio] != frasePreparada[fin]) {
            // Si encuentra un par de caracteres que no son iguales, devuelve false
            return false;
        }
        inicio++;
        fin--;
    }

    // Si el bucle termina sin encontrar discrepancias, devuelve true
    return true;
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string frase;
    char respuesta;

    do {
        std::cout << "Ingrese una frase: ";
        std::getline(std::cin, frase);

        if (esPalindroma(frase)) {
            std::cout << "La frase es palíndroma." << std::endl;
        }
        else {
            std::cout << "La frase no es palíndroma." << std::endl;
        }

        std::cout << "¿Desea continuar? (s/n): ";
        std::cin >> respuesta;
        std::cin.ignore(); // Ignora el salto de línea
    } while (std::tolower(respuesta) == 's');

    return 0;
}