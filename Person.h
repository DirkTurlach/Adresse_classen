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

