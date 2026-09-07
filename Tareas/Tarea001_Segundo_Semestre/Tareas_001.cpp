#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <string>


using namespace std;

class EstacionMeteorologica {
private:

    string nombre;
    vector<double> lecturas;
public:

    EstacionMeteorologica() {
        nombre = "Estacion sin Nombre";
    }

    EstacionMeteorologica(string nombreEstacion) {
        this -> nombre = nombreEstacion;
    }

    bool registrarLecturas(double temperatura) {
        if (temperatura>= -50 && temperatura <= 60){
            lecturas.push_back(temperatura);
            return true;
        }

        return false;

    }

    double promedio(){
        if (lecturas.empty()){
            return 0;
        }

        double suma = accumulate(lecturas.begin(), lecturas.end(), 0.0);

        return suma / lecturas.size();
    }

    double maxima(){
        if (lecturas.empty()){
            return 0;
        }
        
        return *max_element(lecturas.begin(), lecturas.end());
    }

    string getnombre() {
        return nombre;
    }

    int getCantidadLecturas(){
        return lecturas.size();
    }
};


int main(){

    string nombreEstacion;
    cin >> nombreEstacion;

    EstacionMeteorologica estacion(nombreEstacion);

    int M;
    cin >> M;

    string comando;

    for (int i = 0; i < M; i++) {

        cin >> comando;

        if (comando == "registrar"){
            double temperatura;
            cin >> temperatura;

            bool resultado = estacion.registrarLecturas(temperatura);

            cout << boolalpha << resultado << endl;

        }
        
        else if (comando == "promedio"){
            cout << estacion.promedio() << endl;
        }

        else if (comando == "maxima"){
            cout << estacion.maxima() << endl;
        }

        else if (comando == "cantidad"){
            cout << estacion.getCantidadLecturas() << endl;
        }
        
        
    }

    return 0;
}