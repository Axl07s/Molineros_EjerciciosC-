#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
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
