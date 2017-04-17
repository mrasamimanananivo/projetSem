/*
 * Ville.hpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#include <iostream>
#include <string>
#ifndef VILLE_H_
#define VILLE_H_


class Ville {
	std::string nomV;

public:
	Ville();
	Ville(std::string);
	void setNomVille(std::string);
	Ville creerVille();
	virtual ~Ville();
};

#endif /* VILLE_H_ */
