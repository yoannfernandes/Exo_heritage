#pragma once
class Cvect
{
	int nelem;	//nombre d'�l�ments
	int* adr;	//adresse zone dynamique contenant les �l�ments

public:
	vect (int);	//constructeur (pr�cise la taille du vecteur)
	~vect ();	//destructeur
	int& operator [] (int nb);	//acc�s � un �l�ment par son "indice"
};