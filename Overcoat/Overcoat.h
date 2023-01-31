#pragma once
using namespace std;

class Overcoat
{
	char* clothes;
	int cena;
public:
	Overcoat(char* cl, int price) {
		clothes = new char[125];
		clothes = cl;
		cena = price;
	}
	int operator==(Overcoat over) {
		if (strcmp(clothes, over.clothes) == 0) {
			return 1;
		}
		else
			return 0;
	}
	void operator=(Overcoat over) {
		cena = over.cena;
		clothes = over.clothes;
	}
	int operator>(Overcoat over) {
		if (cena > over.cena)
			return 1;
		else
			return 0;
	}
	void Show(){
		cout << "Clothes: " << clothes << endl;
		cout << "cena: " << cena << endl;
	}

};

