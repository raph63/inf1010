/****************************************************************************
 * Fichier: Mission.cpp
 * Auteur: William Bussiere
 * Date: 21 juin 2011
 * Description: Implementation de la classe Mission
 ****************************************************************************/

#include "Mission.h"


Mission::Mission(const string& nom, const string& description)
	: nom_(nom), description_(description)
{
}



Mission::~Mission()
{
}



void Mission::setNom(const string& nom)
{
	nom_ = nom;
}



string Mission::getNom() const
{
	return nom_;
}



void Mission::setDescription(const string& description)
{
	description_ =description;
}



string Mission::getDescription() const
{
	return description_;
}



void Mission::ajouterCheckpoint(const Checkpoint& checkpoint)
{
	checkpoints_.push_back( checkpoint );
}


void Mission::afficher() const
{
	cout << "\tNom : " << nom_ << endl;
	cout << "\tDescription : " << description_ << endl;
	cout << "\tCheckpoints : " << endl;

	for(unsigned int i=0; i<checkpoints_.size(); i++)
	{
		cout << "\t\t" << checkpoints_[i].nom 
			<< " (" << checkpoints_[i].x << ", " << checkpoints_[i].y << ")" 
			<< endl;
	}
	cout << endl;
}