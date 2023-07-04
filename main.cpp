#include <iostream>
using namespace std;

int main() {
    int generaciones;
    double superficie_inicial;
    int herederos_por_generacion[50];

    cout << "Ingrese la superficie inicial del terreno: ";
    cin >> superficie_inicial;
    cout << "Ingrese el numero de generaciones: ";
    cin >> generaciones;

    for (int i = 0; i < generaciones; i++) {
        cout << "Ingrese el numero de herederos en la generacion " << i + 1 << ": ";
        cin >> herederos_por_generacion[i];
    }

    double area_heredada = superficie_inicial;
    for (int i = 0; i < generaciones; i++) {
        area_heredada /= herederos_por_generacion[i];
    }

    cout << "El area de terreno que le corresponde al heredero despues de " << generaciones << " generaciones es: " << area_heredada << endl;

    return 0;
}
