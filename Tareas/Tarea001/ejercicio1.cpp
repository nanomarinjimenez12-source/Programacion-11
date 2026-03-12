#include <iostream>
using namespace std;

int main (){
    const double g = 9.8;
    double t;
    double y;

    cout << "Indique el tiempo que tarda el objeto en pasar por la ventana (s): " << '\n';
    cin >> t;

    cout << "Indique la altura de la ventana (m): " << '\n';
    cin >> y;

    if ( t <= 0 ){
        cout << "Error: El valor indicado (Tiempo) no puede ser negativo." << '\n';
        return 0;
    }

    if (y <= 0) {
        cout << "Error: El valor indicado (Altura) no puede ser negativo" << '\n';
        return 0;
    }

    double v0 = (y - 0.5 * g * t * t ) / t;
    double h = ( v0 * v0) / (2 * g);

    if (h <= 0){
        cout << "Error: Con los valores => h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana." << '\n';
        return 0;
    }

    cout << "La altura desde donde se solto el objeto es: " << h << " m" << '\n';
    return 0;
}