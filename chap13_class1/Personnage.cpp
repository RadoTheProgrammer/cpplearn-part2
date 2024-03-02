#include "Personnage.h"

using namespace std;

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_nomArme("Épée rouillée"), m_degatsArme(10)
{

}

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats;
    if (m_vie < 0) {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;
    if (m_vie > 100) {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() {
    return m_vie > 0;
}