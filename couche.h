/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H
#include "vecteur.h"

class Couche
{
private:
	int etat;	//ETATS: 1-Initialisee   2-Active   3-Inactive   4-Cachee
	float area;
	Vecteur formes;
public:
	Couche();
	~Couche();
	bool addShape(Forme* ptrForme);
	Forme* eraseShape(int index);
	Forme* obtainShape(int index);
	double totalArea();
	bool translateLayer(int deltax, int deltay);
	bool reinitializeLayer();
	bool changeState(int newState);
	int getState();
	void showLayer(ostream & s);
};

#endif
