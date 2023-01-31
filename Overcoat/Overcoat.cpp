#include <iostream>
#include "Overcoat.h"
#include "Flat.h"

using namespace std;
int main()
{
	//Numero 1

	/*Overcoat o((char*)"pijama", 3000);
	Overcoat o1((char*)"Trysi_Supreme", 500000);

	if (o == o1)
		cout << "Rabotaet" << endl;
	else
		cout << "Toje_Rabotaet" << endl;
	o = o1;
	if (o > o1) 
		cout << "Rabotaet2" << endl;
	else
		cout << "Toje_Rabotaet" << endl;
	
	o.Show();
	o1.Show();*/
	

	//Numero 2

	Flat o(500, 1000000);
	Flat o1(100, 30000);

	if (o == o1)
		cout << "Rabotaet" << endl;
	else
		cout << "Toje_Rabotaet" << endl;
	o = o1;
	if (o > o1)
		cout << "Rabotaet2" << endl;
	else
		cout << "Toje_Rabotaet2" << endl;

	o.Show();
	o1.Show();

}
