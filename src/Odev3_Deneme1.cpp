/**
 * @description �kili arama a�a�lar� �zerinde eleman ekleme, eleman silme ve soy say�s�n� bulma gibi �e�itli i�lemler yap�l�yor.
 * @course  �rg�n E�itim 2.S�n�f
 * @assignment  3
 * @date  15.12.2019
 * @author Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/
#include "BinarySearchTree.h"
#include<iostream>

using namespace std;

int main() {
	BinarySearchTree* nesne = new BinarySearchTree; //Heap bellek b�lgesinde BinarySearchTree adl� s�n�ftan nesne olu�turuluyor.
	nesne->basla(); //BinarySearchTree class'�ndan olu�turulan nesnenin basla adl� parametresiz fonksiyonu �a��r�l�yor.
	return system("PAUSE");
}