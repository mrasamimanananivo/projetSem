/*
 * Graphe.cpp
 *
 *  Created on: 1 avr. 2017
 *      Author: Clémentine
 */

#include "Graphe.hpp"
#include<iostream>
#include<string>
using namespace std;

Graphe::Graphe() {
	nbVilles=0;
	vector<Ville> lesVilles;
	vector<vector<Arete> > matrice;


	// TODO Auto-generated constructor stub

}

Graphe::Graphe(int nombreVilles)
{
	nbVilles=nombreVilles;
	vector<Ville> lesVilles;
	vector<vector<Arete> > matrice;

			//matrice[nombreVilles][nombreVilles]=NULL;
}

Graphe::~Graphe() {
	// TODO Auto-generated destructor stub
}

void Graphe::setNbVilles(int nombreVilles)
{
	nbVilles=nombreVilles;
}

int Graphe::getNbVilles()
{
	return nbVilles;
}
int Graphe::saisirNbVilles(){ // demande à l'utilisateur de rentrer le nombre de villes du graphes
	Graphe graphe;
	int nombreVilles;
	std::cout<<"Saisir le nombre de villes du graphe"<<std::endl;
	std::cin>>nombreVilles;
	return nombreVilles;
}


void Graphe:: saisirVilles(){
	Ville ville;
	for(int i=0;i<nbVilles;i++)
	{

		ville = Ville();
		ville=ville.creerVille(); // créer une ville avec le nom saisi par l'utilisateur
		lesVilles.push_back(ville); // ajoute la ville créée à la liste

	}


};

void Graphe::creerGraphe()
{	int laDist;
	Arete arete;
	for(int i=0;i<nbVilles;i++)
	{
			matrice.push_back(vector<Arete>(nbVilles)); // ajoute à la matrice une ligne de taille nbVilles d'arete
	} // on obtient une matrice d'arêtes de taille nbVilles*nbVilles
	for(int i=0;i<nbVilles;i++)
	{
		for(int j=i;j<nbVilles;j++)
		{
			if (i==j)
			{
				arete= Arete(lesVilles[i],lesVilles[j],0); // Pour la case où la ville de la ligne est égale à la ville de la colonne, la distance est 0
				matrice[i].push_back(arete);
			}
			else
			{
				std::cout<<"Saisir la distance entre " << lesVilles[i].getNomVille() <<" et " <<lesVilles[j].getNomVille()<<std::endl;
				std::cin>>laDist;
				matrice[i][j]=Arete(lesVilles[i],lesVilles[j],laDist);
				matrice[j][i]=matrice[i][j]; // La matrice est symétrique
			}
		}
	}
}
int main () {
	int unNombre;
	 Graphe graphe;
	 unNombre = graphe.saisirNbVilles();
	 graphe = Graphe(unNombre);
	 graphe.saisirVilles();
	 graphe.creerGraphe();
	}

