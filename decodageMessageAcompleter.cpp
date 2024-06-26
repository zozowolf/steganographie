/*************************************************
Extraction du texte contenu dans une image
*************************************************/
#include <iostream> // biblioth�que de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <windows.h>
#include <opencv2\opencv.hpp>
#include "FonctionsUtilesOpenCV.h"
#include <fstream>

using namespace std; // utilisation de l'espace de nommage standard
using namespace cv;


/*==============================================
Extraction du caractere contenue dans le pixel
\param pixel	le pixel cod� sur 24 bits 
\return			le caract�re extrait
===============================================*/
char extractionCaractere(unsigned long pixel)
{
	char caractere;	
	...

	return caractere;
}

/*==============================================
D�codage du message
\param nomFichier	Nom du fichier � d�coder
\param pixelsImage	les pixels de l'image
\param largeurImage	Le nombre de pixels dans la largeur
\param hauteurImage	Le nombre de pixels dans la hauteur
\return true si le d�codage a �t� possible
===============================================*/
bool decodageMessage(char * nomFichier, unsigned long **pixelsImage , 
					unsigned largeurImage, unsigned hauteurImage)
{
	//...
	return true;
}

/*==============================================
Fonction principale
===============================================*/
int main()
{
	// Prise en compte des accents
	// Il faudra choisir la police de caract�res Consolas ou Lucida
	SetConsoleOutputCP(1252);
	unsigned long **pixelsImage, largeurImage, hauteurImage;
	char nomFichier[100 + 1];

	// Lecture d'une image et stockage dans la variable img
	Mat img = imread("./medias/placestan1.png");	// ou placestan2.png
	if (img.empty()) //test si l'image a pu �tre trouv�e
	{
		cout << "Erreur : Image non charg�e..!!" << endl;
		system("pause"); // attente d'appui sur une touche
		return -1;
	}

	// Conversion de l'image et du logo en tableaux 2D 
	frameToPixels(img, largeurImage, hauteurImage, pixelsImage, true);

	cout << "Saisir le nom du fichier qui va contenir le message d�cod� ";
	gets_s(nomFichier);

/*
	if (decodageMessage(...))
	{
		cout << "Decodage r�ussi" << endl;
		
	}
	else
		cout << "Echec du d�codage ! " << endl;

*/	

	cout << "Appuyer sur une touche dans la console pour terminer le programme " << endl;
	_getch(); // attente d'appui sur une touche
	return 0; // sortie du programme
}
