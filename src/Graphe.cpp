/*
 * Graphe.cpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#include "Graphe.h"
#include<iostream>
#include<string>
using namespace std;

Graphe::Graphe() {
	nbVilles=0;
	vector<Ville> lesVilles
	// TODO Auto-generated constructor stub

}

Graphe::~Graphe() {
	// TODO Auto-generated destructor stub
}

void Graphe::setNbVilles(int nombreVilles)
{
	nbVilles=nombreVilles;
}
void Graphe::saisirNbVilles(){
	int nombreVilles;
	std::cout<<"Saisir le nombre de villes du graphe"<<std::endl;
	std::cin>>nombreVilles;
	setNbVilles(nombreVilles);
}

void Graphe:: saisirVilles(){
	Ville ville;
	for(int i=0;i<nbVilles;i++)
	{
		ville=ville.creerVille();
		lesVilles.push_back(ville);

	}


};

void Graphe::creerGraphe()
{	int laDist;
	for(int i=0;i<nbVilles;i++)
	{
		for(int j=i;j<nbVilles;j++)
		{
			if (i==j)
			{
				graphe[i][j]=Arete(lesVilles[i],lesVilles[j],0);
			}
			else
			{
				std::cout<<"Saisir la distance entre" << lesVilles[i] <<"et" <<lesVilles[j]<<std::endl;
				std::cin>>laDist;
				graphe[i][j]=Arete(lesVilles[i],lesVilles[j],laDist);
				graphe[j][i]=graphe[i][j];
			}
		}
	}
}
int main () {
	 Graphe graphe;
	 graphe = Graphe();
	 graphe.saisirNbVilles();
	 graphe.saisirVilles();
	 graphe.creerGraphe();
	}


