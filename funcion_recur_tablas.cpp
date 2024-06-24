//fecha: 21/06/24
////Autor:Lopez Quiroz Wagner
//tema: Graficando la pila de llamadas en las funciones recursivas
//Diseña la función recursiva que imprima la una tabla de multiplicar. La función debe recibir 2 parámetros: el primero representa la tabla, y el segundo representa el límite inferior de esa tabla.

#include <iostream>

using namespace std;

void TablaMultiplicar(int tabla, int limite) {
    if (limite > 12) { // Suponiendo que el límite superior es 10
        return;
    }
    cout << tabla << " x " << limite << " = " << tabla * limite << endl;
    TablaMultiplicar(tabla, limite + 1);
}

int main() {
    int tabla, limiteInferior;
    cout << "Introduce el número de la tabla de multiplicar: ";
    cin >> tabla;
    cout << "Introduce el límite inferior: ";
    cin >> limiteInferior;

    TablaMultiplicar(tabla, limiteInferior);

    return 0;
}
