#include <iostream>
#include "cercle.h"

using namespace std;

Cercle::Cercle()
{
	//cout<<"Creation du cercle"<<endl;
	rayon = 1;
}

Cercle::Cercle(int x1, int y1, float r) 	//r est une variable tampon pour le rayon
{
	//cout<<"Creation du cercle parametrer"<<endl;
	rayon = r;
	ancrage.x = x1;
	ancrage.y = y1;
}

Cercle::~Cercle()
{
	//cout<<"Destruction du cercle"<<endl;
}

bool Cercle::isPositive(float mesure)
{
	if (mesure<=0.0)
	{
		return false;
	}
	else
		return true;	
}
	
float Cercle::getRayon()
{
	return rayon;
}

void Cercle::setRayon(float r)
{
	if(isPositive(r)==true)	
		rayon = r;
	else 
		rayon = 0;
}

double Cercle::aire()
{
	return (rayon*rayon*3.141492); 		//Aire d'un cercle = pi*r^2
}

void Cercle::afficher(ostream & s)
{
	if (rayon==0)
		s<<"Dimension de rayon invalide."<<endl;
	else{
		s << "Cercle - Rayon: " << rayon << ", Aire: " << aire();
		s << ", Position (" << ancrage.x << "," << ancrage.y <<")"<< endl;
	}
}

