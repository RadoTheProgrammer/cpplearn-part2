#include "Personnage.h"
#include <iostream>

Personnage::Personnage() : m_vie(100), m_nom("Jack")
{

}

Personnage::Personnage(std::string nom) : m_vie(100), m_nom(nom)
{

}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

void Personnage::sePresenter() const
{
    std::cout << "Bonjour, je m'appelle " << m_nom << std::endl;
    std::cout << "J'ai encore " << m_vie << " points de vie" << std::endl;
}