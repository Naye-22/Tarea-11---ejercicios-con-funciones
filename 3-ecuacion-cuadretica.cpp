/* 
Fecha: 13/6/2024
Autor: Yo
Orden:3) Diseñe la función que calcule el resultado de la ecuación cuadrática. 
Utilice la actividad #10 como guía.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    // Verificar si el coeficiente 'a' es igual a cero
    if (a == 0) {
        return "Error, división por cero";
    }
    
    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;
    
    // Verificar el valor del discriminante
    if (discriminante < 0) {
        return "No se puede calcular la raíz cuadrada de un número negativo";
    }
    
    // Calcular las raíces utilizando la fórmula cuadrática
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);
    
    return "Correcto";
}

int main() {
    double a, b, c;
    double x1, x2;
    
    cout << "Ingrese los coeficientes a, b y c de la ecuación cuadrática: ";
    cin >> a >> b >> c;
    
    string resultado = EcuacionCuadratica(a, b, c, x1, x2);
    
    if (resultado == "Correcto") {
        cout << "Las soluciones de la ecuación son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } else {
        cout << resultado << endl;
    }
    
    return 0;
}
