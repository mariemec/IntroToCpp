/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
Couche::Couche()
{
	etat = 1;				//ETATS: 1-Initialisee   2-Active   3-Inactive   4-Cachee
	area = 0;
	//cout<<"Creation de la couche"<<endl;
}

Couche::~Couche()
{
	//cout<<"Destruction de la couche"<<endl;
}

bool Couche::addShape(Forme* ptrForme)
{
	if (etat == 2)				//Forme peut etre ajoutee seulement si couche est active
	{
		formes.addItem(ptrForme);
		return true;
	}

	else
		return false;
}

Forme* Couche::eraseShape(int index)
{
	if (etat == 2 && index>=0 && index<formes.sizeOf()) //Forme peut etre effacee seulement si couche est active et index valide
	{
		return formes.eraseItem(index);
	}
	else
	{
		Forme* ptr = NULL;
		return ptr;
	}
}

void Couche::showLayer(ostream & s)				//Affichage selon l'etat de la couche
{
	if (etat == 1)
		s<<"Couche initialisee."<<endl;
	if (etat == 2)
	{
		s<<"Couche active";
		if (formes.sizeOf()==0)
			s<<" - vide."<<endl;
		else
		{
			s<<endl;
			formes.showVector(s);
		}
	}
	if (etat == 3)
	{	
		s<<"Couche inactive";
		if (formes.sizeOf()==0)
			s<<" - vide."<<endl;
		else
		{
			s<<endl;
			formes.showVector(s);
		}
	}

	if (etat == 4)
		s<<"Couche cachee."<<endl;

}
bool Couche::changeState(int newState)
{
	if (newState<1 || newState>4)		//index doit etre valide
		return false;	
	else
	{
		etat = newState;
		return true;
	}
}

int Couche::getState()
{
	return etat;	
}

bool Couche::translateLayer(int deltax, int deltay)
{
	if (etat == 2)						//Peut seulement etre translater si couche est active
	{	
		for (int i=0;i<formes.sizeOf();i++)
		{
			formes.obtainItem(i)->translater(deltax, deltay);
		}

		return true;
	}
	else
		return false;
}

Forme* Couche::obtainShape(int index)
{
	if (index<0 || index>formes.sizeOf())
	{
		Forme* ptr = NULL;
		return ptr;
	}
	else
	{
		return formes.obtainItem(index);
	}

}
double Couche::totalArea()
{
	area=0;
	for (int i=0;i<formes.sizeOf();i++)
	{
		Forme* ptrForme = formes.obtainItem(i);
		area += (ptrForme->aire());
	}
	return area;
}

bool Couche::reinitializeLayer()			//Efface toutes les formes dans la couche puis remet l'etat initialisee
{
	formes.clear();
	etat = 1;
	return true;
}

