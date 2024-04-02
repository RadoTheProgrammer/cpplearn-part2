#include "Magicien.h"
#include "Personnage.h"
#include <iostream>
using namespace std;

Magicien::Magicien() : Personnage(), m_mana(100)
{

}

Magicien::Magicien(string nom) : Personnage(nom), m_mana(100)
{
    
}

void Magicien::BouleDeFeu(Personnage &cible) const
{
    //cout << "Le magicien invoque sa boule de feu" << endl;
    cible.recevoirDegats(50);
    
}

void Magicien::BouleDeGlace() const
{
    cout << "Le magicien invoque sa boule de glace" << endl;
}