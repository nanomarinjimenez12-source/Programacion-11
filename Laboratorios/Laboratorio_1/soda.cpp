#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int main() {

    const int N = 5;
    
    vector<pair<int, string>> pedidos;
    queue<string> fila;
    stack<string> historial;

    for (int i = 0; i < N; i++) {

        string nombre;
        int monto;

        cout << "Nombre del estudiante: ";
        cin >> nombre;

        cout << "Nombre del pedido: ";
        cin >> monto;
        
        pedidos.push_back({monto, nombre});
        fila.push(nombre);

    }

    sort(pedidos.begin(), pedidos.end());

    cout << "\n -- Pedidos Ordenados por su Monto --\n";

    for( int i = 0; i < N; i++) {
        cout << pedidos[i].second << " - " << pedidos[i].first << " colones " << "\n";
    }

    int mayor = 0;

    for( int i = 1; i < N; i++) {
        if (pedidos[i].first > pedidos[mayor].first) {
            mayor = i;
        }
    }

    cout << "\n -- Pedido de Mayor Monto:  \n";
    cout << pedidos[mayor].second << " - " << pedidos[mayor].first << " colones " << "\n";

    string buscado; 

    cout << "\n Ingrese el nombre del estudiante a buscar: ";
    cin >> buscado;

    bool encontrado = false;

    for (int i = 0; i < N; i++) {

        if (pedidos[i].second == buscado) {

            cout << buscado << "Hizo un pedido de " << pedidos[i].first << " colones " << "\n";
            encontrado = true;
        }
    }

    if (encontrado == false){
        cout << buscado << " No hizo pedido." << "\n";

    }

    cout << "\n -- Atendiendo Pedidos : \n";

    while (fila.empty() == false) {
        string nombre = fila.front();

        fila.pop();

        cout << "Atendiendo pedido de " << nombre << "\n";

        historial.push(nombre);

    }

    string comando;

    cout << "\n -- Ingrese un comando : ";
    cin >> comando;

    if(comando == "deshacer") {

        if (historial.empty() == false) {

            string ultimo = historial.top();

            historial.pop();
            fila.push(ultimo);

            cout << " Se deshizo el pedido de " << ultimo << "\n";
        }
    }

    return 0;
}
