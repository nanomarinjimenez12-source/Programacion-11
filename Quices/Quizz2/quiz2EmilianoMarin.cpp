#include <iostream>
#include <string>
using namespace std;


int main()
{

    int cantidad_vagones;
    string o;
    int a;
    int c;
    cout << "Indique cuantos elemento desea agregar, en ser el caso que no, coloque = 0. : ";
    cin >> a;
    cout << "Indique hasta que elemento desea moverse , o, elemento a consultar: ";
    cin >> c;
    cout <<"Indique la cantidad de vagones: ";
    cin >> cantidad_vagones;
    int vagones[cantidad_vagones]= {0};
    cout << "Indique la operacion (A,C): ";
    cin >> o;


    if (toupper(o[0]) == 'A')
    {
        for (int i = 0; i < c; i++)
        {
            vagones[i] += a;
            cout << vagones;
        }
    }
    else if (toupper(o[0]) == 'C')
    {
        cout << vagones[c];
    }
    else
    {
        cout << "Operacion invalida.";
    }
    return 0;
}


