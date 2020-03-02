#include "forme.h"
#include <iostream>
using namespace std;

class Cercle : public Forme
{
protected:
	float rayon;
public:
	Cercle();				//Constructeur par defaut
	Cercle(int x1, int y1, float r); 	//constructeur parametrer, x y est l'origine, r est le rayon
	virtual ~Cercle();			//Destructeur virtuel
	
	float getRayon();
	void setRayon(float r);			//r est une variable tampon pour le rayon du cercle
	double aire();
	void afficher(ostream & s);
	bool isPositive(float mesure);
		
};
