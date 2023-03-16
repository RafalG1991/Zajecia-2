#include <iostream>

class Punkt;
class Kolo
{
	double xsr, ysr, r;
	friend void sprawdz(const Kolo*, const Punkt*);
public:
	Kolo(double xsr, double ysr, double r);
};

class Punkt
{
	double xp, yp;
	friend void sprawdz(const Kolo*, const Punkt*);
public:
	Punkt(double xp, double yp);
};

void sprawdz(const Kolo* kolo, const Punkt* punkt);