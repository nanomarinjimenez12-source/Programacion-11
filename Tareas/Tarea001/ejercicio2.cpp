#include <iostream>
using namespace std;

int main() {

    const double A = 331;
    const double B = 0.6;
    const double C = -273.15;
    double v, T;

    cout << "Ingrese la velocidad del objeto (m/s): " << '\n';
    cin >> v;

    cout << "Ingrese la temperatura del aire (C): " << '\n';
    cin >> T;

    if (v < 0) {
        cout << "El valor indicado (Velocidad) no puede ser negativo." << '\n';
        return 0;
    }

    if (T <= C) {
        cout << "Error:El valor indicado (Temperatura) no puede ser menor al 0 absoluto (-273.5C)." << '\n';
        return 0;
    }

    double vs = A + B * T;
    double M = v / vs;

    string regimen;

    if (M < 0.8) {
        regimen = "Subsonico";
    }
    else if (M >= 0.8 && M < 1.2) {
        regimen = "Transonico";
    }
    else if (M >= 1.2 && M < 5.0) {
        regimen = "Supersonico";
    }
    else {
        regimen = "Hipersonico";
    }

    cout << "vs = " << vs << " m/s" << '\n';
    cout << "M = " << M << '\n';
    cout << "Regimen: " << regimen << '\n';

    return 0;
}