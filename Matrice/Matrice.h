#ifndef MATRICE_H
#define MATRICE_H
#include <WEMOS_Matrix_LED.h>

class  CMatrice : public MLED		//Classe matrice heritière MLED
{
public :

	CMatrice();									//Construcetur
	~CMatrice();								// Destructeur
	void Affiche (int num, bool unit);			//Fonction Affiche
	void Affiche (int num);
};
#endif
