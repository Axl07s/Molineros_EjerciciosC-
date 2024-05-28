//DISEÑE EL PROGRAMA EN C++
// QUE GENERE UN NUMERO ALEATORIO ENTRE 1 Y 6
//SI EL NUMERO GENERADO ES IMPAR, SI EL NUMERO ES IMPAR SE MUESTRA EL MENSAJE "ERES EL GANADOR"
//DE LO CONTRARIO "SIGUE INTENTANDO, TU PUEDES!"
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main ()
{
        srand((unsigned)time(NULL));
        int n=rand ()&6+1;
        cout<<endl<<"El numero aleatorio es: " <<n;
        if (n%2!=0)
        {
            cout<<endl<<"Ganaste un viaje a Galapagos";
        }
        else{
            cout<<endl<<"Perdiste sigue intentando";
        }
        return 0;

        }