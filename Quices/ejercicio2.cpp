#include <iostream>
using namespace std;

int main() {
   int a, b;
   int precio_e = 0;
   int descuento = 0;
   cout << "Indique su consumo: " << '\n';
   cin >> a;

   if (a <= 200)
   {
    precio_e = a * 75;
   }
   else if (400 >= a >= 201)
   {
    precio_e = 200* 75 + ((a - 200)* 110);
   }
   else if (a >= 401)
   {
    precio_e = 200*75 + 200*110 + ((a- 400)* 160);
   }
   cout << "Posee tarifa Social? 1 para si; 0 para no: " << '\n';
   cin >> b;

   if (b == 1 && a < 200)
   {
        descuento = (precio_e/100) *40;
        int total = precio_e - descuento;
        cout << "Subtotal: " << precio_e << '\n' << "Descuento" << descuento << '\n' << "Total" << total << '\n';
   }
   else
   {
    cout << "Subtotal: " << precio_e << '\n' << "Descuento" << descuento << '\n' << "Total" << precio_e << '\n';
   }
   
    return 0;
}