#include <cmath>
#include "klasy.h"

using namespace std;

Kolo::Kolo(double xsr, double ysr, double r): xsr(xsr), ysr(ysr), r(r) {}
Punkt::Punkt(double xp, double yp): xp(xp), yp(yp) {}

void sprawdz(const Kolo* kolo, const Punkt* punkt) {
	if (pow((punkt->xp) - (kolo->xsr), 2) + pow((punkt->yp) - (kolo->ysr), 2) <= pow(kolo->r, 2)) {
		cout << "Punkt nalezy do wskazanego kola";
	}
	else {
		cout << "Punkt nie nalezy do wskazanego kola";
	}
}