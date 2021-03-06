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
	
	void hatGeburtstag();
	void erhoeheGehaltUm();
	void erhoeheGehaltAuf();
	void aendereAdresse(Adresse);
	void aenderePlz(int);
	void aendereNachname(char*);
	
	Adresse getAdr();
};

