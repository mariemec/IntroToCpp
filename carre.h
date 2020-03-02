#include "rectangle.h"
#include <iostream>
using namespace std;

class Carre: public Rectangle
{
protected:
	float longueur;
public:
	Carre(); 				//constructeur par defaut. set la longueur = 1.
	Carre(int x1, int y1, float lo);	//constructeur parametrer qui assigne la position du coin gauche inferieur du carre
	~Carre();			//Destructeur virtuel

	float getLongueur();
	void setLongueur(float lo); //lo est une variable tampon pour la longueur
	double aire();
	void afficher(ostream & s);
};
