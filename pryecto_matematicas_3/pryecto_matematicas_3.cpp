#include <iostream>
#include <string>

// Convierte una cadena binaria a un entero
int binaryToInt(const std::string& binary) {
    int num = 0;
    for (char bit : binary) {
        num = num * 2 + (bit - '0');
    }
    return num;
}

// Convierte un entero a una cadena binaria
std::string intToBinary(int num) {
    if (num == 0) return "0";
    std::string binary;
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

// Realiza la suma de dos números binarios
std::string binaryAddition(const std::string& a, const std::string& b) {
    int num1 = binaryToInt(a);
    int num2 = binaryToInt(b);
    int sum = num1 + num2;
    return intToBinary(sum);
}

// Realiza la resta de dos números binarios
std::string binarySubtraction(const std::string& a, const std::string& b) {
    int num1 = binaryToInt(a);
    int num2 = binaryToInt(b);
    int difference = num1 - num2;
    return intToBinary(difference);
}

// Realiza la multiplicación de dos números binarios
std::string binaryMultiplication(const std::string& a, const std::string& b) {
    int num1 = binaryToInt(a);
    int num2 = binaryToInt(b);
    int product = num1 * num2;
    return intToBinary(product);
}

// Función principal
int main() {
    std::string bin1, bin2;
    char operation;

    std::cout << "Ingrese el primer número binario: ";
    std::cin >> bin1;

    std::cout << "Ingrese el segundo número binario: ";
    std::cin >> bin2;

    std::cout << "Ingrese la operación (+, -, *): ";
    std::cin >> operation;

    std::string result;
    switch (operation) {
    case '+':
        result = binaryAddition(bin1, bin2);
        break;
    case '-':
        result = binarySubtraction(bin1, bin2);
        break;
    case '*':
        result = binaryMultiplication(bin1, bin2);
        break;
    default:
        std::cout << "Operación no válida!" << std::endl;
        return 1;
    }

    std::cout << "El resultado es: " << result << std::endl;

    return 0;
}
