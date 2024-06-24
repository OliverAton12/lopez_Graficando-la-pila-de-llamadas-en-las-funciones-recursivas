//fecha: 19/06/24
////Autor:Lopez Quiroz Wagner
//tema: ejercicios con funciones recursivas
//  Diseña la función recursiva que imprima la una tabla de multiplicar, de manera descendente desde el 10 al 1

#include <iostream>
using namespace std;

void tabla_de_multiplicar(int numero, int multiplicador) {
    if (multiplicador == 0) { // Caso base: cuando llegamos a multiplicar por 0, terminamos la recursión
        return;
    } else {
        int resultado = numero * multiplicador;
        cout << numero << " x " << multiplicador << " = " << resultado << endl;
        tabla_de_multiplicar(numero, multiplicador - 1); // Llamada recursiva con el multiplicador decrementado
    }
}

int main() {
    tabla_de_multiplicar(9, 10); // Llamada inicial para imprimir la tabla del 9 pero pueden ser otras tablas 
    return 0;
}
