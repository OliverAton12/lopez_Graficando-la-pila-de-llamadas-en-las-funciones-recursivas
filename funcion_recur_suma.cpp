//fecha: 21/06/24
////Autor:Lopez Quiroz Wagner
//tema: Graficando la pila de llamadas en las funciones recursivas
//Diseñe la función recursiva que realice la sumatoria de : 1 +2 + 3 + 4 + 5  + 6 + 7 .... n. Donde es el límite de la serie. 


#include <iostream>

using namespace std;

int sumatoria(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumatoria(n - 1);
}

int main() {
    int n;
    cout << "Introduce el límite de la serie: ";
    cin >> n;

    int resultado = sumatoria(n);
    cout << "La suma es: " << resultado << endl;

    return 0;
}
