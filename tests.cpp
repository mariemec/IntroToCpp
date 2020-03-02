/********
 * Fichier: tests.cpp
 * Auteurs: Marianne Cote cotm1730 Marie-Eve Castonguay casm1907
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"
using namespace std;

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
	tests_unitaires_rectangle();
	tests_unitaires_carre();
	tests_unitaires_cercle();
	
}

void Tests::tests_unitaires_rectangle()
{
   // Reste a faire un test de translation!!!!
	Rectangle *pr_rec1 = new Rectangle;
	Rectangle *pr_rec2 = new Rectangle;	


	Coordonnee c1, c2;
	c1.x = 4;
	c1.y = 5;
	c2.x = -7;
	c2.y = -8;

	
	cout<< "------------------"<<endl;
	cout<<"Test Rectangle 1 - Rectangle Unitaire/par defaut"<< endl;	
	cout<<"Valeurs attendues: Hauteur: 1, Largeur 1, Aire: 1, Position (0,0)"<<endl;
	cout<<"Valeurs obtenues: ";
	pr_rec1->afficher(cout); 								
	cout<< "------------------"<<endl;

	cout<<"Test Rectangle 2 - Changer les dimensions du rectangle unitaire avec des mesures valides"<< endl;	
	pr_rec1->setHauteur(2);
	pr_rec1->setLargeur(3);
	pr_rec1->setAncrage(c1);
	cout<<"Valeurs attendues: Hauteur: 2, Largeur 3, Aire: 6, Position (4,5)"<<endl;
	cout<<"Valeurs obtenues: ";
	pr_rec1->afficher(cout); 								
	cout<< "------------------"<<endl;

	cout<<"Test Rectangle 3 - Hauteur negative"<< endl;
	pr_rec1->setHauteur(-2);
	cout<<"Valeurs attendues: Dimension(s) invalides(s)."<<endl;
	cout<<"Valeurs obtenues: ";
	pr_rec1->afficher(cout); 
	cout<< "------------------"<<endl;

	cout<<"Test Rectangle 4 - Test de translation"<< endl;
	pr_rec2->setHauteur(10);
	pr_rec2->setLargeur(12);
	pr_rec2->translater(-7,-8);
	cout<<"Valeurs attendues: Hauteur: 10, Largeur 12, Aire: 120, Position (-7.-8)"<<endl;
	cout<<"Valeurs obtenues: ";
	pr_rec2->afficher(cout);

	delete pr_rec1;
	delete pr_rec2;
}

void Tests::tests_unitaires_carre()
{

   // Tests sur les formes carre
	Carre *pc_car = new Carre;
	Carre *pc_car2 = new Carre;
	Carre *pc_car3 = new Carre;

	Coordonnee c1, c2;
	c1.x = -1;
	c1.y = 2;
	c2.x = 3;
	c2.y = -4;

	cout<< "------------------"<<endl;
	cout<<"Test Carre 1 - Carre Unitaire/par defaut"<< endl;	
	cout<<"Valeurs attendues: Carre - Hauteur: 1, Largeur 1, Aire: 1, Position (0,0)"<<endl;
	cout<<"Valeurs obtenues: ";
	pc_car->afficher(cout); 								
	cout<< "------------------"<<endl;
	cout<<"Test Carre 2 - Changer les mesures du carre unitaire avec des mesures valides"<< endl;	
	pc_car->setLongueur(5);
	pc_car->setAncrage(c1);
	cout<<"Valeurs attendues: Carre - Longueur: 5, Aire: 25, Position (-1,2)"<<endl;
	cout<<"Valeurs obtenues: ";
	pc_car->afficher(cout); 								
	cout<< "------------------"<<endl;
	cout<<"Test Carre 3 - Longueur negative"<< endl;
	pc_car2->setLongueur(-2);
	cout<<"Valeurs attendues: Longueur invalide."<<endl;
	cout<<"Valeurs obtenues: ";
	pc_car2->afficher(cout); 
	cout<< "------------------"<<endl;
	cout<<"Test Carre 4 - Translation d'un vecteur par defaut"<< endl;
	pc_car3->translater(3,-4);
	cout<<"Valeurs attendues: Carre - Longueur:1, Aire: 1, Position (3,-4)"<<endl;
	cout<<"Valeurs obtenues: ";
	pc_car3->afficher(cout);
	
	delete pc_car;
	delete pc_car2;
	delete pc_car3;
}
void Tests::tests_unitaires_cercle()
{
   // Tests sur les formes cercle
	Cercle *pc_cer = new Cercle;

	cout<< "------------------"<<endl;
	cout<<"Test cercle 1 - Cercle Unitaire/par defaut"<< endl;	
	cout<<"Valeurs attendues: Cercle - Rayon: 1, Aire: 3.14, Position (0,0)"<<endl;
	cout<<"Valeurs obtenues: ";
	pc_cer->afficher(cout); 								
	cout<< "------------------"<<endl;
	
	delete pc_cer;
}

void Tests::tests_unitaires_vecteur()
{
   // Tests sur la classe Vecteur

	Vecteur* pf_vec = new Vecteur;
	
	Carre *pc_car = new Carre;
	Cercle *pc_cer = new Cercle;
	Rectangle *pr_rec = new Rectangle;
	
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 1 - Creation d'un vecteur par defaut"<< endl;
	cout<<"Valeurs attendues: size: 0, capacity: 1"<<endl;		
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 2 - Ajout d'un carre unitaire dans le vecteur"<< endl;
	pf_vec->addItem(pc_car);
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 3 - Ajout d'un cercle unitaire dans un vecteur plein"<< endl;
	pf_vec->addItem(pc_cer);
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 4 - Ajout d'un rectangle unitaire dans un vecteur plein"<< endl;
	pf_vec->addItem(pr_rec);
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 5 - Modification des attributs de toutes les formes a une valeur de 2 unites"<< endl;
	pc_car->setLongueur(2);
	pc_cer->setRayon(2);
	pr_rec->setLargeur(2);
	pr_rec->setHauteur(2);
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 6 - Enlevement de l'item avec index 1"<< endl;
	pf_vec->eraseItem(1);
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 7 - Obtenir addresse de l'item avec index 1"<< endl;
	cout<<pf_vec->obtainItem(0)<<endl;
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 8 - Obtenir addresse de d'un item avec un index invalide"<< endl;
	cout<<"Addresse attendue: 0 ou NULL"<<endl;
	cout<<"Addresse obtenue: " << pf_vec->obtainItem(-1)<<endl;
	cout<< "------------------"<<endl;
	cout<<"Test vecteur 9 - Vider le vecteur"<< endl;
	pf_vec->clear();
	pf_vec->showVector(cout);
	cout<< "------------------"<<endl;
	

	delete pc_cer;


}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
	Couche* pc_couche = new Couche;

	Carre *pc_car = new Carre;
	Cercle *pc_cer = new Cercle(1,1,2);
	Rectangle *pr_rec = new Rectangle;
	
	cout<< "------------------"<<endl;
	cout<<"Test couche 1 - Creation d'une couche par defaut"<< endl;
	pc_couche->showLayer(cout);
	cout<< "------------------"<<endl;
	cout<<"Test couche 2 - Changement d'etat (Initialisee -> active)"<< endl;
	pc_couche->changeState(2);
	pc_couche->showLayer(cout);
	cout<< "------------------"<<endl;
	cout<<"Test couche 3 - Ajout d'un carre, d'un cercle et d'un rectangle sur la couche"<< endl;
	pc_couche->addShape(pc_car);
	pc_couche->addShape(pc_cer);
	pc_couche->addShape(pr_rec);
	pc_couche->showLayer(cout);
	cout<< "------------------"<<endl;
	cout<<"Test couche 4 - Translation de la couche"<< endl;
	pc_couche->translateLayer(3,4);
	pc_couche->showLayer(cout);
	cout<< "------------------"<<endl;
	cout<<"Test couche 5 - Retrait du carre de la couche"<< endl;
	pc_couche->eraseShape(0);
	pc_couche->showLayer(cout);
	cout<< "------------------"<<endl;
	cout<<"Test couche 6 - Calcul de l'aire totale"<< endl;
	pc_couche->showLayer(cout);
	cout<<"Aire totale: " << pc_couche->totalArea()<<endl;
	cout<< "------------------"<<endl;
	cout<<"Test couche 7 - Reinitialisation de la couche"<< endl;
	pc_couche->reinitializeLayer();				//DELETES CERCLE AND RECTANGLE
	pc_couche->showLayer(cout);
	
	delete pc_car;
	delete pc_couche;
	
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
	Canevas* pc_can = new Canevas;
	Cercle* pc_cer = new Cercle(0,0,1);
	Carre* pc_car = new Carre(0,0,2);
	Rectangle* pr_rec = new Rectangle(0,0,3,4);
	Rectangle* pr_rec1 = new Rectangle;

	cout<< "------------------"<<endl;
	cout<<"Test canevas 1 - Creation d'un canevas par defaut"<< endl;
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 2 - Changer la couche active"<< endl;
	pc_can->activerCouche(1);
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 3 - Ajouter une forme"<< endl;
	pc_can->ajouterForme(pr_rec1);
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 4 - Cacher une couche "<< endl;
	pc_can->cacherCouche(3);
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 5 - Changer de couche active puis y ajouter des formes "<< endl;
	pc_can->activerCouche(2);
	pc_can->ajouterForme(pc_cer);
	pc_can->ajouterForme(pc_car);
	pc_can->ajouterForme(pr_rec);
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 6 - Effacer une forme de la couche active "<< endl;
	pc_can->retirerForme(0);
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 7 - Calculer l'aire totale du canevas"<< endl;
	pc_can->afficher(cout);
	cout<<"Aire totale attendue: "<<pr_rec1->aire()<<" + " <<pc_car->aire()<<" + " <<pr_rec->aire()<<endl;
	cout<<"Aire totale obtenue: "<<pc_can->aire()<<endl;
	cout<< "------------------"<<endl;
	cout<<"Test canevas 8 - Translater le canevas (couche active seulement) de deltaX = 1, deltaY = 3 "<< endl;
	pc_can->translater(1,3);
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;
	cout<<"Test canevas 9 - Reinitialisation du canevas "<< endl;
	pc_can->reinitialiser();
	pc_can->afficher(cout);
	cout<< "------------------"<<endl;	

	delete pc_cer;

}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::validation()
{
	Canevas* ptr_canevas = new Canevas;
	
	Rectangle* ptr_rect1 = new Rectangle(1,1,1,2);
	Carre* ptr_carre1 = new Carre(2,2,2);
	Cercle* ptr_cercle1 = new Cercle(3,3,3);

	Rectangle* ptr_rect2 = new Rectangle;

	Rectangle* ptr_rect0 = new Rectangle(-1,-1,2,3);
	Carre* ptr_carre0 = new Carre(-2,-2,3);
	Cercle* ptr_cercle0 = new Cercle(-3,-3,4);



	ptr_canevas->activerCouche(1);
	ptr_canevas->ajouterForme(ptr_rect1);
	ptr_canevas->ajouterForme(ptr_carre1);
	ptr_canevas->ajouterForme(ptr_cercle1);

	ptr_canevas->activerCouche(2);
	ptr_canevas->ajouterForme(ptr_rect2);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;	
	cout<<"---------------------------------------------------------"<<endl;

	ptr_canevas->activerCouche(0);
	ptr_canevas->ajouterForme(ptr_rect0);
	ptr_canevas->ajouterForme(ptr_carre0);
	ptr_canevas->ajouterForme(ptr_cercle0);
	ptr_canevas->cacherCouche(2);
	ptr_canevas->activerCouche(1);
	ptr_canevas->translater(1,1);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;

	ptr_canevas->retirerForme(0);						//Retire le ptr_rect0 sans le deleter
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;

	ptr_canevas->reinitialiser();						//EFFACE TOUTES LES FORMES PRESENTES DANS LE CANEVAS
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;

	delete ptr_rect1;
}

void Tests::tests_planDeTests()
{
	Canevas* ptr_canevas = new Canevas;

	Rectangle* ptr_rect0 = new Rectangle(-1,-1,2,3);
	Carre* ptr_carre0 = new Carre(-2,-2,3);
	Cercle* ptr_cercle0 = new Cercle(-3,-3,4);	

	Rectangle* ptr_rect1 = new Rectangle(1,1,1,2);
	Carre* ptr_carre1 = new Carre(2,2,2);
	Cercle* ptr_cercle1 = new Cercle(3,3,3);

	Rectangle* ptr_rect4 = new Rectangle;
	Carre* ptr_carre4 = new Carre;
	Cercle* ptr_cercle4 = new Cercle;

	ptr_canevas->activerCouche(4);
	ptr_canevas->ajouterForme(ptr_rect4);
	ptr_canevas->ajouterForme(ptr_carre4);
	ptr_canevas->ajouterForme(ptr_cercle4);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;
	ptr_canevas->activerCouche(0);
	ptr_canevas->ajouterForme(ptr_rect0);
	ptr_canevas->ajouterForme(ptr_carre0);
	ptr_canevas->ajouterForme(ptr_cercle0);
	ptr_canevas->cacherCouche(3);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;
	ptr_canevas->cacherCouche(0);
	ptr_canevas->translater(1,1);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;
	ptr_canevas->activerCouche(1);
	ptr_canevas->ajouterForme(ptr_rect1);
	ptr_canevas->ajouterForme(ptr_carre1);
	ptr_canevas->ajouterForme(ptr_cercle1);
	ptr_canevas->retirerForme(1);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;
	ptr_canevas->activerCouche(2);
	ptr_canevas->cacherCouche(4);
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
	cout<<"---------------------------------------------------------"<<endl;
	ptr_canevas->reinitialiser();
	ptr_canevas->afficher(cout);
	cout<<"Aire: " << ptr_canevas->aire() << endl;
}

