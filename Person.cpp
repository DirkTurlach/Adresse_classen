#include "Person.h"
//#include "Adresse.h"
#include <iostream>;

Person::Person(void)
{
}

Person::Person(char* vorname, char* nachname, int alter, double gehalt, Adresse adr)
{
	setVorname(vorname);
	setNachname(nachname);
	setAlter(alter);
	setGehalt(gehalt);
	setAdr(adr);
}

void Person::setVorname(char* xy)
{
	strcpy (vorname,xy);
}

void Person::setNachname(char* xy)
{
	strcpy (nachname,xy);
}

void Person::setAlter(int x)
{
	alter = x;
}

void Person::setGehalt(double x)
{
	gehalt = x;
}

void Person::setAdr(Adresse a)
{
	adr = a;
}


char* Person::getVorname()
{
	return vorname;
}

char* Person::getNachname()
{
	return nachname;
}

int Person::getAlter()
{
	return alter;
}

double Person::getGehalt()
{
	return gehalt;
}

Adresse Person::getAdr()
{
	return adr;
}

void Person::hatGeburtstag()
{
	alter = alter + 1;
}

void Person::erhoeheGehaltUm()
{
	gehalt = gehalt + 200;
}

void Person::erhoeheGehaltAuf()
{
	gehalt = 4200;
}

void Person::aendereAdresse(Adresse a)
{
	setAdr(a);
}

void Person::aenderePlz(int b)
{
	Person::adr.setPlz(b);
}