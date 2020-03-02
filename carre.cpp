#include "carre.h"
#include <iostream>
using namespace std;

Carre::Carre()
{
	//cout<<"Creation du carre"<<endl;
	longueur = 1;
}

Carre::Carre(int x1, int y1, float lo) //lo est une variable tampon pour la longueur
{
	//cout<<"Creation du carre parametrer"<<endl;
	longueur = lo;
	ancrage.x = x1;
	ancrage.y = y1;
}

Carre::~Carre()
{
	//cout<<"Destruction du carre"<<endl;
}

float Carre::getLongueur()
{
	return longueur;
}

void Carre::setLongueur(float lo)
{
	if (isPositive(lo)==true)
		longueur = lo;
	else
		longueur = 0;
	
}

double Carre::aire()
{
	return (longueur*longueur);
}

void Carre::afficher(ostream & s) 
{
	if (longueur==0)
		s << "Longueur invalide."<<endl;
	else
	{
		s << "Carre - Longueur: " << longueur << ", Aire: " << aire();
		s << ", Position: (" << ancrage.x << "," << ancrage.y << ")"<<endl;
	}
}
