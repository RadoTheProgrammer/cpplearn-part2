#pragma once

#include <string>

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nom);
    void recevoirDegats(int nbDegats);
    void coupDePoing(Personnage &cible) const;

    void sePresenter() const;
    
    protected:
    
    int m_vie;
    std::string m_nom;
};