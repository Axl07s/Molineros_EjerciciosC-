#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa el generador de números aleatorios
    srand(static_cast<unsigned int>(time(0)));  

    // Genera un número aleatorio entre 1 y 6
    int dado = rand() % 6 + 1;  

    // Muestra el número en el que ha caído el dado
    std::cout << "El dado ha caído en el número: " << dado << std::endl;

    // Muestra el símbolo correspondiente al número generado
    switch(dado) {
        case 1:
            std::cout << "*" << std::endl;
            break;
        case 2:
            std::cout << "- -" << std::endl;
            break;
        case 3:
            std::cout << "+ + +" << std::endl;
            break;
        case 4:
            std::cout << "@ @ @ @" << std::endl;
            break;
        case 5:
            std::cout << "| | | | |" << std::endl;
            break;
        case 6:
            std::cout << ":-) :-) :-) :-) :-) :-)" << std::endl;
            std::cout << "¡Has ganado!" << std::endl;
            break;
    }

    return 0;
}

