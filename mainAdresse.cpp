#include <iostream>
using namespace std;
#include "Person.h"

void main(void)
{	
	Adresse peter1("Dankwartsgrube", 23552, "Luebeck");

	//cout << "EK: Strasse: " << peter1.getStrasse() << endl;
	//cout << "EK: Plz: " << peter1.getPlz() << endl;
	//cout << "EK: Ort: " << peter1.getOrt() << endl << endl;

	Person peter3;
	peter3.setVorname("Peter");
	peter3.setNachname("Heinzel");
	peter3.setAlter(23);
	peter3.setGehalt(3200);
	//peter3.setAdr(peter1);
	peter3.setAdr(Adresse("Hellbound", 45682, "Berlin"));
	

	cout << "SK: Vorname: " << peter3.getVorname() << endl;
	cout << "SK: Nachname: " << peter3.getNachname() << endl;
	cout << "SK: Alter: " << peter3.getAlter() << endl;
	cout << "SK: Gehalt: " << peter3.getGehalt() << endl << endl;
	cout << "Peters Strasse: " << peter3.getAdr().getStrasse() << endl;
	cout << "Peters Postleitzahl: " << peter3.getAdr().getPlz() << endl;
	cout << "Peters Ort: " << peter3.getAdr().getOrt() << endl << endl;

	Person peter4("Peter4", "Heinzel4", 52, 3200, Adresse("Grubeneck", 14223, "Hamburg"));
	cout << "Peter4:\nVorname: " << peter4.getVorname() << endl;
	cout << "Nachname: " << peter4.getNachname() << endl;
	cout << "Alter: " << peter4.getAlter() << endl;
	cout << "Gehalt: " << peter4.getGehalt() << endl << endl;
	cout << "Peters Strasse: " << peter4.getAdr().getStrasse() << endl;
	cout << "Peters Postleitzahl: " << peter4.getAdr().getPlz() << endl;
	cout << "Peters Ort: " << peter4.getAdr().getOrt() << endl;
	//Adresse peter2;

	//cout << "SK: Strasse: " << peter2.getStrasse() << endl;
	//cout << "SK: Plz: " << peter2.getPlz() << endl;
	//cout << "SK: Ort: " << peter2.getOrt() << endl << endl;

	//peter2.aenderePlzAuf(2816);
	//cout << "Neue PLZ: " << peter2.getPlz() << endl;

	

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