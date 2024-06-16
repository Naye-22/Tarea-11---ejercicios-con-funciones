/* 
Fecha: 13/6/2024
Autor: Yo
Orden: 5) Una función recibe 3 números enteros. La función devuelve verdadero si uno de esos números es la 
suma de los otros 2.
*/
#include <iostream>

using namespace std;

bool esSumaDeOtrosDos(int a, int b, int c) {
    // Verificar las tres combinaciones posibles
    if (a == b + c) {
        return true;
    }
    if (b == a + c) {
        return true;
    }
    if (c == a + b) {
        return true;
    }
    // Si ninguna combinación es verdadera, devolver false
    return false;
}

int main() {
    int num1, num2, num3;
    
    cout << "Ingrese tres números enteros: ";
    cin >> num1 >> num2 >> num3;
    
    if (esSumaDeOtrosDos(num1, num2, num3)) {
        cout << "Uno de los números es la suma de los otros dos." << endl;
    } else {
        cout << "Ninguno de los números es la suma de los otros dos." << endl;
    }
    
    return 0;
}
