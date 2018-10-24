#include "Adresse.h"
class Person
{
private:
	char vorname[30];
	char nachname[30];
	int alter;
	double gehalt;
	Adresse adr;

public:
	Person();
	Person(char*, char*, int, double, Adresse);

	void setVorname(char*);
	void setNachname(char*);
	void setAlter(int);
	void setGehalt(double);
	void setAdr(Adresse);

	char* getVorname();
	char* getNachname();
	int getAlter();
	double getGehalt();
	Adresse getAdr();
};

