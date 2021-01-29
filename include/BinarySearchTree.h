/**
 * @description �kili arama a�a�lar� �zerinde eleman ekleme, eleman silme ve soy say�s�n� bulma gibi �e�itli i�lemler yap�l�yor.
 * @course  �rg�n E�itim 2.S�n�f
 * @assignment  3
 * @date  15.12.2019
 * @author Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/
#include <iostream>
#include<math.h>
#include <fstream>
#include <conio.h>
#include "BSTNode.h"

using namespace std;

class BinarySearchTree {
private:

	BSTNode* kok1 = NULL;

	BSTNode* rakip_root = NULL;

	fstream file;


	BSTNode* node_temp;

	int all_child = 0;

	BSTNode* dugum;

	BSTNode* N_iter;

	int all_child_OnMyLeaf = 0;

	int all_child_OnOponentLeaf = 0;


	BSTNode* parentNode;

	

	

public:
	void Ekle(BSTNode*&, int);

	void bulVeSil(BSTNode*&, int);

	bool Sil(BSTNode*&);

	void postorder(BSTNode*);

	void yazdir(int, int);

	void Oku();

	void rakipOku();

	int All_Child_Total(BSTNode*);

	int max(BSTNode*);

	void Hesapla();

	void basla();

	void kazananKontrol();

	~BinarySearchTree();
};

