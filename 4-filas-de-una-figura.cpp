/* 
Fecha: 13/6/2024
Autor: Yo
Orden: 4) Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, 
recibe como parámetro un string que indica el relleno de la figura a dibujar.
*/
#include <iostream>
#include <string>

using namespace std;

void dibujarFigura(int filas, string relleno) {
    // Iterar a través del número de filas
    for (int i = 1; i <= filas; ++i) {
        // Imprimir el relleno 'i' veces en la fila actual
        for (int j = 0; j < i; ++j) {
            cout << relleno;
        }
        // Imprimir una nueva línea al final de cada fila
        cout << endl;
    }
}

int main() {
    int filas;
    string relleno;
    
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el carácter de relleno: ";
    cin >> relleno;
    
    // Llamar a la función para dibujar la figura
    dibujarFigura(filas, relleno);
    
    return 0;
}
