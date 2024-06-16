/* 
Fecha: 13/6/2024
Autor: Yo
Orden:1) Diseñe la funcion que devielva el resultado de la serie siguiente: 
1 - 2 + 3 - 4 + 5 - 6 + 7 ..... donde n es un parametro que indique el final de la serie
*/
#include<iostream>

using namespace std; 

//Calcular la serie 1 - 2 + 3 - 4
int SumaAlterna(int num)
{

    int suma = 0; // acumulador
    for(int k=1; k<=num; k++)
    {
        if(k % 2 == 0)
            suma -= k; //suma = suma -k;
        else 
            suma += k; // suma = suma -k;
    }
    return suma;
}
int main()
{
    
    int suma=SumaAlterna(5);
    cout<<suma;
    return 0;
}