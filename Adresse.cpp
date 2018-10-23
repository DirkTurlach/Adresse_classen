#include "Adresse.h"
#include <iostream>;

//Adresse::Adresse(void)
//{
//}
//
//Adresse::Adresse(char* strasse, int plz, char* ort) 
//{
//	setStrasse(strasse);
//	setPlz(plz);
//	setOrt(ort);
//}


void Adresse::setPlz (int x)
{
	plz = x;
}

int Adresse::getPlz()
{
	return plz;
}


void Adresse::setStrasse(char* xy)
{
	strcpy (strasse, xy);
}

char* Adresse::getStrasse()
{
	return strasse;
}


void Adresse::setOrt (char* o)
{
	strcpy(ort, o);
}

char* Adresse::getOrt()
{
	return ort;
}