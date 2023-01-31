#pragma once
#include <iostream>

using namespace std;
class Flat
{
	int S;
	int cena;
public:
	Flat(int s1, int price) {
		S = s1;
		cena = price;
	}
	int operator==(Flat over) {
		return S == over.S;
	}
	void operator=(Flat over) {
		cena = over.cena;
		S = over.S;
	}
	int operator>(Flat over) {
		if (cena > over.cena)
			return 1;
		else
			return 0;
	}
	void Show() {
		cout << "S: " << S << endl;
		cout << "cena: " << cena << endl;
	}

};

