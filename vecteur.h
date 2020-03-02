#include <iostream>
#include "forme.h"
using namespace std;


class Vecteur
{
protected:
	int size; 			//nombre d'items dans le vecteur
	int capacity; 			//nombre max d'items que le vecteur peut contenir
	Forme** formes;
public:
	Vecteur();
	~Vecteur();
	int sizeOf();
	int capacityOf();
	void doubleCapacity();
	bool addItem(Forme *ptrForme); 			//ptrForme est le pointeur vers la forme a ajouter a la fin du vecteur
							//Reussi: Vrai   Echec: Faux
	bool isVectorFull();				//Retourne vrai si le vecteur est plein. Sinon, retourne faux.
	void showVector(ostream & s);
	Forme* eraseItem(int index); 			//index de l'item a enlever du vecteur
							//Reussi: retourne un ptr contenant l'addresse ou la forme a ete effacee
							//Echec: retourne un ptr NULL

	Forme* obtainItem(int index);			//index de l'item a obtenir
							//Reussi: Retourne ptr sur la forme a la position en index 
							//Echec: retourne un ptr NULL
	void clear();

	bool isEmpty();
};
