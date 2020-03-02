#include <iostream>
#include "rectangle.h"


using namespace std;

Rectangle::Rectangle()
{
	//cout<<"Creation du rectangle"<<endl;
	hauteur = 1;
	largeur = 1;
}

//PRECONDITION: la hauteur et la largeur doivent etre positives et plus grand que 0.
Rectangle::Rectangle(int x1, int y1, float h, float l) //h et l sont des variables pour la hauteur et la largeur
{
	//cout<<"Creation du rectangle parametrer"<<endl;
	hauteur = h;
	largeur = l;
	ancrage.x = x1;
	ancrage.y = y1;
}

Rectangle::~Rectangle()
{
	//cout<<"Destruction du rectangle"<<endl;
}

bool Rectangle::isPositive(float mesure)
{
	if (mesure<=0.0)
	{
		return false;
	}
	else
		return true;	
}


float Rectangle::getHauteur()
{
	return hauteur;
}

void Rectangle::setHauteur(float h)	//h est une variable tampon pour la hauteur
{
	if (isPositive(h)==true)
		hauteur = h;
	else
		hauteur = 0;
		
}

float Rectangle::getLargeur()
{
	return largeur;
}

void Rectangle::setLargeur(float l)	//l est une variable tampon pour la largeur
{
	if (isPositive(l)==true)
		largeur = l;
	else
		largeur = 0;

}

double Rectangle::aire()
{
	return (largeur*hauteur);
}

void Rectangle::afficher(ostream & s) //la fonction afficher prend comme parametre afficher(cout)
{
	if (hauteur == 0 || largeur == 0)
		s << "Dimension(s) de forme invalide(s)."<<endl;
	else 
	{	
		s << "Rectangle - Hauteur: " << hauteur<<", Largeur: " << largeur<<", Aire: " << aire();
		s << ", Position (" << ancrage.x << "," << ancrage.y << ")" << endl;
	}
}
