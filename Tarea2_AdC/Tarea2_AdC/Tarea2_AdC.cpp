//Alvarez López Uri Yael.
// Ciberseguridad.
// Arquitectura de computadoras.
// Tarea2_AdC.cpp : El usuario ingresa un numero en decimal y la salida es en Hexadecimal y en forma de un display analógico.

#include <iostream>
#include <sstream>
#include <iomanip>

// Función para convertir un número decimal a hexadecimal
std::string decimalToHexadecimal(int num) {
    std::stringstream ss;
    ss << std::hex << num;  // Convertir número a hexadecimal
    return ss.str();
}

// Función para crear un display análogo del número hexadecimal
void displayAnalogHex(std::string hex) {
    std::cout << "Hexadecimal: " << hex << std::endl;
    std::cout << "Display Analogico:" << std::endl;
    for (char c : hex) {
        switch (toupper(c)) {
        case '0': std::cout << " -----\n|     |\n|     |\n -----\n"; break;
        case '1': std::cout << "     |\n     |\n"; break;
        case '2': std::cout << " -----\n     |\n -----\n|     \n -----\n"; break;
        case '3': std::cout << " -----\n     |\n -----\n     |\n -----\n"; break;
        case '4': std::cout << "|     |\n|     |\n -----\n     |\n"; break;
        case '5': std::cout << " -----\n|     \n -----\n     |\n -----\n"; break;
        case '6': std::cout << " -----\n|     \n -----\n|     |\n -----\n"; break;
        case '7': std::cout << " -----\n     |\n     |\n"; break;
        case '8': std::cout << " -----\n|     |\n -----\n|     |\n -----\n"; break;
        case '9': std::cout << " -----\n|     |\n -----\n     |\n -----\n"; break;
        case 'A': std::cout << " -----\n|     |\n|     |\n -----\n|     |\n"; break;
        case 'B': std::cout << "|     \n|     \n|---- \n|     |\n|---- \n"; break;
        case 'C': std::cout << " -----\n|     \n|     \n -----\n"; break;
        case 'D': std::cout << "     |\n     |\n ----|\n|     |\n ----|\n"; break;
        case 'E': std::cout << " -----\n|     \n -----\n|     \n -----\n"; break;
        case 'F': std::cout << " -----\n|     \n -----\n|     \n"; break;
        default:  std::cout << "  ?  \n"; break;
        }
    }
}

int main() {
    int num;
    std::cout << "Ingrese un numero decimal: ";
    std::cin >> num;

    // Convertir a hexadecimal
    std::string hex = decimalToHexadecimal(num);

    // Mostrar en display análogo
    displayAnalogHex(hex);

    return 0;
}

