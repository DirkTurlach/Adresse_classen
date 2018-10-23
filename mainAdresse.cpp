#include <iostream>
using namespace std;
#include "Adresse.h"

void main(void)
{	/*
	Adresse peter1("Dankwartsgrube", 23552, "Luebeck");

	cout << "EK: Strasse: " << peter1.getStrasse() << endl;
	cout << "EK: Plz: " << peter1.getPlz() << endl;
	cout << "EK: Ort: " << peter1.getOrt() << endl << endl;*/

	Adresse peter2;

	peter2.setStrasse("Alb");
	peter2.setPlz(23611);	
	peter2.setOrt("Luebeck");

	cout << "SK: Strasse: " << peter2.getStrasse() << endl;
	cout << "SK: Plz: " << peter2.getPlz() << endl;
	cout << "SK: Ort: " << peter2.getOrt() << endl << endl;

// Adressen auf dem Heap und dem Stack anlegen und ausgeben

	//Adresse* adresse1 = new Adresse("aStrasse", 23551, "Hamburg");
	//Adresse adresse2("bStrasse", 23551, "Berlin");

	//cout << "Adressen auf dem Heap. Mit Pointer arbeiten. Diese auch wieder loeschen" << endl;
	//cout << adresse1 -> getStrasse() << endl;
	//cout << (*adresse1).getPlz() << endl;
	//cout << adresse1 -> getOrt() << endl << endl;

	//cout << "Adressen auf dem Stack." << endl;
	//cout << adresse2.getStrasse() << endl;
	//cout << adresse2.getPlz() << endl;
	//cout << adresse2.getOrt() << endl;

	//delete adresse1;
	//adresse1 = nullptr;
}