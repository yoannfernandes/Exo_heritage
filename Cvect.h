#pragma once
class Cvect
{
	int nelem;	//nombre d'éléments
	int* adr;	//adresse zone dynamique contenant les éléments

public:
	vect (int);	//constructeur (précise la taille du vecteur)
	~vect ();	//destructeur
	int& operator [] (int nb);	//accès à un élément par son "indice"
};