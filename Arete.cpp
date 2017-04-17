/*
 * Arete.cpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#include "Arete.h"

Arete::Arete(Ville laVille1, Ville laVille2) {
	// TODO Auto-generated constructor stub
	ville1 = laVille1;
	ville2 = laVille2;
	distance = 0;
	phero = 0;
}

Arete::Arete(Ville laVille1,Ville laVille2, int laDistance )
{
	ville1 = laVille1;
	ville2 = laVille2;
	distance = laDistance;
	phero = 0;
}

Arete::Arete (Ville laVille1,Ville laVille2, int laDistance, float lesPhero)
{
	ville1 = laVille1;
	ville2 = laVille2;
	distance = laDistance;
	phero = lesPhero;
}
Arete::~Arete() {
	// TODO Auto-generated destructor stub
}

