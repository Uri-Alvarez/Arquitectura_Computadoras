/*Universidad Amerike 
* Alvarez López Uri Yael.
* Arquitectura de Computadoras.
* Tarea1.cpp : El usuario ingresa un numero en Binario y el programa lo convierte a decimal y proporciona la salida con el estilo de un display analogico.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Función para convertir binario a decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1; // 2^0
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

// Función para dibujar el dígito en estilo "analógico"
void drawDigit(int digit) {
    switch (digit) {
    case 0:
        cout << " - \n| |\n   \n| |\n - \n";
        break;
    case 1:
        cout << "   \n  |\n   \n  |\n   \n";
        break;
    case 2:
        cout << " - \n  |\n - \n|  \n - \n";
        break;
    case 3:
        cout << " - \n  |\n - \n  |\n - \n";
        break;
    case 4:
        cout << "   \n| |\n - \n  |\n   \n";
        break;
    case 5:
        cout << " - \n|  \n - \n  |\n - \n";
        break;
    case 6:
        cout << " - \n|  \n - \n| |\n - \n";
        break;
    case 7:
        cout << " - \n  |\n   \n  |\n   \n";
        break;
    case 8:
        cout << " - \n| |\n - \n| |\n - \n";
        break;
    case 9:
        cout << " - \n| |\n - \n  |\n - \n";
        break;
    case 10:
        cout << "  - \n| |\n - \n| |\n  \n";
        break;
    default:
        cout << "Digit not supported for analog display.\n";
    }
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "Decimal: " << decimal << endl;

    cout << "Analog display: \n";
    while (decimal > 0) {
        drawDigit(decimal % 15);
        decimal /= 15;
    }

    return 0;
}
