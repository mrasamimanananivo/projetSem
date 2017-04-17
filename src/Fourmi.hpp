/*
 * Fourmi.hpp
 *
 *  Created on: 17 avr. 2017
 *      Author: Clémentine
 */

#ifndef FOURMI_H_
#define FOURMI_H_

#include "Ville.hpp"
#include <vector>
#include <string>

using namespace std;

class Fourmi {

	vector<Ville*> villesAVisiter;
	vector<Ville*> villesVisitees;
	int posArete;

public:
	Fourmi(vector<Ville>);
	virtual ~Fourmi();
};



#endif /* FOURMI_H_ */
