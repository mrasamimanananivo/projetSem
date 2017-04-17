/*
 * Fourmi.cpp
 *
 *  Created on: 17 avr. 2017
 *      Author: Clémentine
 */

#include "Fourmi.hpp"

namespace std {

Fourmi::Fourmi(vector<Ville> Villes) {

	posArete=0;
	for(int i=0;i<(Villes.size());i++)
	{
		villesAVisiter.push_back(&(Villes[i]));
	}

	vector<Ville*> villesVisitees;


	// TODO Auto-generated constructor stub

}

Fourmi::~Fourmi() {

	delete villesAVisiter;
	delete villesVisitees;
	// TODO Auto-generated destructor stub
}

} /* namespace std */
