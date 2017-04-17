/*
 * Systeme.hpp
 *
 *  Created on: 10 avr. 2017
 *      Author: Cl�mentine
 */

#ifndef SYSTEME_H_
#define SYSTEME_H_

#include "graphe.h"
#include "fourmi.h"


namespace std {

class Systeme {
	vector<Fourmi> lesFourmis;
	Graphe graphe;
public:
	Systeme();
	virtual ~Systeme();
};

} /* namespace std */

#endif /* SYSTEME_H_ */
