/*
 * Graphe.hpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#ifndef GRAPHE_H_
#define GRAPHE_H_

#include "Ville.hpp"
#include "Arete.hpp"

#include <vector>
#include <iostream>
#include <string>
using namespace std;



class Graphe {
	int nbVilles;
	vector<Ville> lesVilles;
	vector<vector<Arete> > matrice;

public:
	Graphe();
	Graphe(int);
	void setNbVilles(int);
	int getNbVilles();
	int saisirNbVilles();
	void saisirVilles();
	void creerGraphe();
	virtual ~Graphe();
};

#endif /* GRAPHE_H_ */
