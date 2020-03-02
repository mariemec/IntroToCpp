#include "forme.h"
#include <iostream>
using namespace std;

class Rectangle : public Forme
{
private:
	float hauteur;
	float largeur;
public: 
	Rectangle(); 					//constructeur par defaut, assigne la hauteur = 1 et la largeur = 1.
	Rectangle(int x1, int y1, float h, float l);	//constructeur parametrer qui assigne la position du coin gauche bas du rectangle
	virtual ~Rectangle();				//destructeur virtuel

	float getHauteur();
	void setHauteur(float h);
	float getLargeur();
	void setLargeur(float l);
	bool isPositive(float mesure);
	virtual double aire();
	virtual void afficher(ostream & s);
};
