// RafalGrajcar_zaj2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "klasy.h"

using namespace std;

int main() {
    double xsr, ysr, r, xp, yp;
    cout << "Wprowadz wspolrzedne srodka kola" << endl;
    cout << "x: ";
    cin >> xsr;
    cout << "y: ";
    cin >> ysr;
    do {
        cout << "Wprowadz promien kola - musi byc wiekszy od zera!" << endl;
        cin >> r;
    } while (r <= 0);

    Kolo kolo(xsr, ysr, r);

    cout << "Wprowadz wspolrzedne punktu" << endl;
    cout << "x: ";
    cin >> xp;
    cout << "y: ";
    cin >> yp;

    Punkt punkt(xp, yp);

    sprawdz(&kolo, &punkt);
    
    return 0;
}