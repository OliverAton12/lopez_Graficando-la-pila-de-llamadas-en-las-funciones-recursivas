//fecha: 19/06/24
////Autor:Lopez Quiroz Wagner
//tema: ejercicios con funciones recursivas
//  Diseñe la función recursiva que cuente el total de cifras que tiene un número entero.

#include<iostream>
using namespace std;

int CuentaCifrasRec(int num, int n) {
    if (n <= num) {
        return 1 + CuentaCifrasRec(num, n * 10);
    } else {
        return 0;
    }
}

int main() {
    cout << "Cuenta cifras de 123: " << CuentaCifrasRec(123, 1) << endl;
    cout << "Cuenta cifras de 45: " << CuentaCifrasRec(45, 1) << endl;
    cout << "Cuenta cifras de 6789: " << CuentaCifrasRec(6789, 1) << endl;
    cout << "Cuenta cifras de 10123: " << CuentaCifrasRec(10123, 1) << endl;
    cout << "Cuenta cifras de 1800: " << CuentaCifrasRec(1800, 1) << endl;
    cout << "Cuenta cifras de 8: " << CuentaCifrasRec(8, 1) << endl;

    //otros números
    cout << "Cuenta cifras de 99999: " << CuentaCifrasRec(99999, 1) << endl;
    cout << "Cuenta cifras de 0: " << CuentaCifrasRec(0, 1) << endl;
    cout << "Cuenta cifras de 1000000: " << CuentaCifrasRec(1000000, 1) << endl;

    return 0;
}
