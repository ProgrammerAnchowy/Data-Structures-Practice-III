/**
 * @description �kili arama a�a�lar� �zerinde eleman ekleme, eleman silme ve soy say�s�n� bulma gibi �e�itli i�lemler yap�l�yor.
 * @course  �rg�n E�itim 2.S�n�f
 * @assignment  3
 * @date  15.12.2019
 * @author Davud Samed Tombul(b171210007@sakarya.edu.tr)
 **/
#include "BSTNode.h"
#include <iostream>

BSTNode::BSTNode(int data)
{
	veri = data;

	sol = NULL;

	sag = NULL;
}

void BSTNode::setNumberofChild(int childCount)//
{
	child_count = childCount;
}

int BSTNode::getNumberofChild()
{
	return child_count;
}

int BSTNode::getNumberofChild(BSTNode* dugum)
{
	if (dugum == NULL)
	{
		return 0;
	}
	if (dugum->sol == NULL && dugum->sag == NULL)
	{
		return 0;
	}
	else if (dugum->sol == NULL && dugum->sag->sag == NULL && dugum->sag->sol == NULL)
	{ 
		return 1;
	}
	else if (dugum->sag == NULL && dugum->sol->sag == NULL && dugum->sol->sol == NULL)
	{ 
		return 1;
	}
	else if (dugum->sol != NULL && dugum->sag != NULL && dugum->sol->sol == NULL && dugum->sol->sag == NULL && dugum->sag->sag == NULL && dugum->sag->sol == NULL)
		return 2;
	else {//Sadece alttaki d���mlerin soylar�n� topla + kendi alt�mdaki d���mler kendi soylar�na dahil olmad�klar� i�in onlar� da topla
		int i = 0;

		if (dugum->sol != NULL) i++;

		if (dugum->sag != NULL) i++;

		return getNumberofChild(dugum->sol) + getNumberofChild(dugum->sag) + i;
	}
}

int BSTNode::get_data()
{
	return veri; 
}

BSTNode::BSTNode()
{};

void BSTNode::set_data(int data)
{
	veri = data;
}

