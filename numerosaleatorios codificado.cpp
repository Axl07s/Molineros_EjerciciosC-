#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    // Mensaje antes de iniciar el programa
    std::cout << "2) Diseñe el programa que genera un número aleatorio entre 1 y 6. Si el número es impar se muestra Felicidades, ganaste, de lo contrario Perdiste, sigue intentando" << std::endl;

    // Genera un número aleatorio entre 1 y 6
    int n = rand() % 6 + 1;

    // Muestra el número aleatorio generado
    cout << endl << "El numero aleatorio es: " << n << endl;

    // Verifica si el número es impar o par y muestra el mensaje correspondiente
    if (n % 2 != 0) {
        cout << "Eres el ganador" << endl;
    } else {
        cout << "Sigue intentando, tu puedes!" << endl;
    }

    return 0;
}
