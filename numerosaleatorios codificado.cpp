#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa el generador de números aleatorios
    srand(static_cast<unsigned int>(time(0)));  

    // Genera un número aleatorio entre 1 y 6
    int numero = rand() % 6 + 1;  

    // Muestra el número generado
    std::cout << "El número generado es: " << numero << std::endl;

    // Determina si el número es impar o par y muestra el mensaje correspondiente
    if (numero % 2 != 0) {
        std::cout << "Felicidades, ganaste" << std::endl;
    } else {
        std::cout << "Perdiste, sigue intentando" << std::endl;
    }

    return 0;
}