class Adresse
{
private:
	char strasse[30];
	int plz;
	char ort[30];

public:
	/*Adresse();
	Adresse(char*, int, char*);*/

	void setStrasse (char*);
	char* getStrasse();

	void setPlz (int);
	int getPlz ();

	void setOrt (char*);
	char* getOrt ();
};

