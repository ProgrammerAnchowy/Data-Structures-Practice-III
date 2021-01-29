/**
 * @description �kili arama a�a�lar� �zerinde eleman ekleme, eleman silme ve soy say�s�n� bulma gibi �e�itli i�lemler yap�l�yor.
 * @course  �rg�n E�itim 2.S�n�f
 * @assignment  3
 * @date  15.12.2019
 * @author Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/
#include <iostream>

class BSTNode {

private:

	int veri;

	int child_count = 0;

public:

	BSTNode* sol;

	BSTNode* sag;

	BSTNode(int);

	void setNumberofChild(int);

	int getNumberofChild(BSTNode*);

	BSTNode();

	int getNumberofChild();

	int get_data();

	void set_data(int);

};
