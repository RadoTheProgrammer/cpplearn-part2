#include "Personnage.h"
#include "Arme.h"
#include <iostream>

using namespace std;
// Personnage::Personnage() // Constructeur
// {
//     m_vie = 100;
//     m_mana = 100;
//     m_nomArme = "Épée rouillée";
//     m_degatsArme = 10;
// }
Personnage::Personnage() : m_vie(100), m_mana(100), m_arme()
{
    m_arme = new Arme();
}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_arme(0), m_mana(100)
{
    m_arme = new Arme(nomArme, degatsArme);
}

Personnage::~Personnage()
{
    delete m_arme;
}

Personnage::Personnage(Personnage const& personnageACopier)
    : m_vie(personnageACopier.m_vie), m_mana(personnageACopier.m_mana), m_arme(0)
{
    //m_arme = personnageACopier.m_arme;
    m_arme = new Arme(*(personnageACopier.m_arme));
}

Personnage& Personnage::operator=(Personnage const& personnageACopier) throw()
{
    if (this != &personnageACopier)
    {
        m_vie = personnageACopier.m_vie;
        m_mana = personnageACopier.m_mana;
        delete m_arme;
        m_arme = new Arme(*(personnageACopier.m_arme));
    }
    return *this;
}
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme->getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }
}



bool Personnage::estVivant() const
{
    if (m_vie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

void Personnage::afficherEtat() const
{
    cout << "vie : " << m_vie << endl;
    cout << "mana : " << m_mana << endl;
    m_arme->afficher();
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

