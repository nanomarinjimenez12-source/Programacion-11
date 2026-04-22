#include <iostream>
using namespace std;

int main() {
    int a, b;
    int precio_base;
    int recargo;
    string categoria;
    cout << "Ingrese su edad: ";
    cin >> a;

    if (a < 12)
    {
        precio_base = 2500;
        categoria = "Menor de edad";
    }
    else if (64 >= a >= 12)
    {
        precio_base = 4000;
        categoria = "Adulto";
    }
    else if ( a >= 65)
    {
        precio_base = 2000;
        categoria = "Adulto Mayor";
    }
    cout << "Ingrese 1 para dia entre semana o 2 para fin de semana: ";
    cin >> b;

    if (b == 2)
    {
        recargo = precio_base *0.20;
        int total = recargo + precio_base;
        cout << "Categoria: " << categoria << '\n' << "Precio Base: " << precio_base << '\n' << "Recargo: " << recargo << '\n' << "Total: " << total;
    }
    
    else if (b == 1)
    {
        cout << "Categoria: " << categoria << '\n' << "Precio Base: " << precio_base << '\n' << "Recargo: " << recargo << '\n' << "Total: " << precio_base;
    }
    

    return 0;
}