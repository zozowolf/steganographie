/*************************************************
Prototypes des fonctions utiles pour manipuler simplement 
les pixels d'une frame

Auteur : V ROBERT
Date : Janvier 2016
Version : 1.0
*************************************************/
#include <opencv2\opencv.hpp>
#include <opencv2\highgui.hpp>
using namespace cv;

/*==============================================
Fonction pour m�moriser la frame 
dans un tableau � deux dimensions

Entr�e : frame dont les octets R,V,B sont stock�s
� la suite dans le champ data
===============================================*/
void frameToPixels(Mat frame, unsigned & width, unsigned & height, unsigned long ** & pixels, bool allouerMemoire=false);

/*==============================================
Fonction pour m�moriser les pixels lus
dans la frame

Entr�e : Tableau � 2 dimensions
Sortie ; frame
===============================================*/
void PixelsToFrame(Mat & frame, unsigned width, unsigned height, unsigned long ** pixels);

/*==============================================
Extraction du niveau de bleu
===============================================*/
unsigned char niveauDeBleu(unsigned long pixel);

/*==============================================
Extraction du niveau de vert
===============================================*/
unsigned char niveauDeVert(unsigned long pixel);


/*==============================================
Extraction du niveau de rouge
===============================================*/
unsigned char niveauDeRouge(unsigned long pixel);

/*==============================================
Extraction du niveau de gris
===============================================*/
unsigned char niveauDeGris(unsigned char rouge, unsigned char vert, unsigned char bleu);


/*==============================================
Extraction du niveau de gris d'un pixel
===============================================*/
unsigned char niveauDeGris(unsigned long pixel);


/*==============================================
Passage en gris
===============================================*/
void passageEnGris(unsigned long & pixelATraiter);


