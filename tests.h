/********
 * Fichier: tests.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour les tests de Graphicus.
 *    Ce fichier peut etre adapte a vos besoins de tests. Ce fichier
 *    fait partie de la distribution de Graphicus.
********/

#include <iostream>
#include "canevas.h"
#include "carre.h"
#include "coordonnee.h"
#include "cercle.h"

using namespace std;

class Tests
{
public:
   // Methodes pour les tests unitaires des classes
   void tests_unitaires_formes();
   void tests_unitaires_rectangle();
   void tests_unitaires_carre();
   void tests_unitaires_cercle();
   void tests_unitaires_vecteur();
   void tests_unitaires_couche();
   void tests_unitaires_canevas();
   void tests_unitaires(); // Appel de tous les tests unitaires

   void tests_planDeTests();
   void validation();
};
