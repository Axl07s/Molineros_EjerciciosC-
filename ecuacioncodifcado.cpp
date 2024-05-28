#include <iostream>
#include <cmath> // Para la función sqrt()
using namespace std;

int main() {
    double a, b, c; // Coeficientes de la ecuación cuadrática
    double discriminante; // Discriminante de la ecuación

    // Solicitar al usuario que ingrese los coeficientes
    cout << "Ingresa el valor de a: ";
    cin >> a;
    cout << "Ingresa el valor de b: ";
    cin >> b;
    cout << "Ingresa el valor de c: ";
    cin >> c;

    // Verificar si a es cero
    if (a == 0) {
        cout << endl << "El coeficiente 'a' no puede ser cero. La ecuación no es cuadrática." << endl;
        return 1; // Terminar el programa con un código de error
    }

    // Calcular el discriminante
    discriminante = (b * b) - (4 * a * c);

    // Determinar el tipo de soluciones
    if (discriminante > 0) {
        // Dos soluciones reales distintas
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << endl << "Las soluciones son reales y distintas:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        // Una solución real
        double x = -b / (2 * a);
        cout << endl << "La solución es real y única:" << endl;
        cout << "x = " << x << endl;
    } else {
        // Soluciones complejas
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << endl << "Las soluciones son complejas y distintas:" << endl;
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
    }

    return 0;
}
