/*
 * Arete.h
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#ifndef ARETE_H_
#define ARETE_H_
#include "Ville.h"

class Arete {
	Ville ville1, ville2;
	int distance;
	float phero;
public:
	Arete(Ville,Ville);
	Arete(Ville,Ville,int);
	Arete(Ville,Ville,int,float);
	virtual ~Arete();
};

#endif /* ARETE_H_ */
