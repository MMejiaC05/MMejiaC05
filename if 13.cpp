#include <iostream>
using namespace std;

int main ()
{
    int h;
    string nombre;
    float salario;

    cout<< "Escriba su nombre: ";
    cin >> nombre;

    cout << "ingrese las horas trabajadas" ;
    cin >> h;


    if (h=160)
    {
        salario = (h * 10);
        cout << salario << endl;
    }
    else if (h>160)
    {
    salario = ( (h - 160)*15) + (160*10);
    cout << salario << endl;
    }
    if (h<=2000)
    }
    cout << "el salario de " << nombre << "es" << salario << "\n";
    {
    else if (2000 < salario <= 2200)
    {
        salario = (salario - (salario*0.3));
        cout<< "el salario de " << nombre << "es" << salario <<"\n";
        }
    return 0;
    }


