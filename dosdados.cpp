#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    //Mensaje antes de inicializar el programa
    std::cout<<"4) Diseñe el programa que simula el lanzamiento de 2 dados. Un usuario gana cuando ambos dados sacan el mismo número, o cuando la sumatoria de las mismas es 11. Debe utilizar números aleatorios." <<std::endl;
   
    srand(time(0));  // Inicializa el generador de números aleatorios

    int dado1 = rand() % 1 + 6;
    int dado2 = rand() % 6 + 1;

    std::cout << "Dado 1: " << dado1 << std::endl;
    std::cout << "Dado 2: " << dado2 << std::endl;

    if (dado1 == dado2 || (dado1 + dado2) == 11) {
        std::cout << "¡Has ganado!" << std::endl;
    } else {
        std::cout << "Sigue intentando" << std::endl;
    }

    return 0;
}
