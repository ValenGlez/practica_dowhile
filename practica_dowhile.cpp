#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
[]Declarar un string denominado como "letra".
[]Hacer un do con todo el codigo adentro por si falla que se repita.
[]Mostrar a el usuario el menu con las instrucciones para las distintas funciones.(D es para ver sus datos, S para el saldo y E para salir)
[]Hacer If anidados para que dependiendo de la letra ingresada el programa ejecute una accion.
[]Asignarle a el do el while y la condicion.
*/
using namespace std;
int main ()
{

    string letra;

    do
    {

        cout << "Pulse D para ver sus datos personales." << endl << endl << "Pulse S para mostrar su saldo."<< endl << endl << "Pulse E para salir de el programa." << endl << endl;

        cin >> letra;

        if (letra.length() > 1) {
            cout << "Ingrese un solo caracter." << endl << endl;
        }

        if (letra == "D" || letra == "d")
        {
            cout << "Nombre: Valentino Gonzalez."<< endl << "Edad: 18 anios." << endl << "Altura: 1.84m." << endl << "Peso: 64.5kg." << endl << endl;
        }

        else if (letra == "S" || letra == "s")
        {
            cout << "Su saldo es de: $2" << endl << endl;
        }

        else if (letra == "E" || letra == "e")
        {
            cout << "Saliendo del programa..." << endl << endl;
        }

        else
        {
            cout << "Opcion no valida." << endl << endl;
        }

    }
    while(letra != "E" && letra != "e" );

    return 0;
}
