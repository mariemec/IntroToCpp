/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{
	totalArea = 0;
	couches[0].changeState(2);
	
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for (int i=0;i<MAX_COUCHES;i++)
	{
		couches[i].reinitializeLayer();
	}
	couches[0].changeState(2);
	totalArea = 0;	
	return true;
}

bool Canevas::activerCouche(int index)					//ETATS: 1-Initialisee   2-Active   3-Inactive   4-Cachee
{
	int state;
	if (index<0||index>MAX_COUCHES)
		return false;
	else
	{
		for (int i=0;i<MAX_COUCHES;i++)
		{
			state = couches[i].getState();			//Rendre la couche couramment active a inactive
			if(state == 2)			
			{	
				couches[i].changeState(3);
			}
		}
		couches[index].changeState(2);				//Rendre la couche specifiee en parametre active
		return true;
	}
}

bool Canevas::cacherCouche(int index)
{
	if (index<0||index>MAX_COUCHES)
		return false;
	else
	{
		couches[index].changeState(4);
		return true;
	}
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	int activeLayer;

	for (int i=0;i<MAX_COUCHES;i++)
	{			
		if(couches[i].getState() == 2)				//Trouve l'index de la couche active
		{	
			activeLayer = i;
		}
	}
	couches[activeLayer].addShape(p_forme);				//Ajoute la forme a la couche active
	return true;
}

bool Canevas::retirerForme(int index)
{
	for (int i=0;i<MAX_COUCHES;i++)
	{
		couches[i].eraseShape(index);
	}
	return true;
}

double Canevas::aire()
{
	totalArea = 0;
	for (int i=0;i<MAX_COUCHES;i++)
	{
		if (couches[i].getState()==2 || couches[i].getState()==3)  //Aire totale prend compte des couches actives et inactives
		{
			totalArea+=couches[i].totalArea();
		}
	}	
	return totalArea;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	for (int i=0;i<MAX_COUCHES;i++)
	{
		couches[i].translateLayer(deltaX, deltaY);
	}
	return true;
}

void Canevas::afficher(ostream & s)
{
	s<<endl<<"Couche 0"<<endl;
	couches[0].showLayer(s);
	s<<endl<<"Couche 1"<<endl;
	couches[1].showLayer(s);
	s<<endl<<"Couche 2"<<endl;
	couches[2].showLayer(s);
	s<<endl<<"Couche 3"<<endl;
	couches[3].showLayer(s);
	s<<endl<<"Couche 4"<<endl;
	couches[4].showLayer(s);
	s<<endl;

}
