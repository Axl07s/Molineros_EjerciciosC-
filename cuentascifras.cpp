#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un número entre 1 y 9.999.999: ";
    std::cin >> numero;

    if (numero < 1 || numero > 9999999) {
        std::cout << "El número ingresado no está en el rango permitido." << std::endl;
        return 1;
    }

    int cifras = 0;
    int temp = numero;

    while (temp != 0) {
        temp /= 10;
        cifras++;
    }

    std::cout << "El número " << numero << " se compone de " << cifras << " cifras." << std::endl;

    return 0;
}
