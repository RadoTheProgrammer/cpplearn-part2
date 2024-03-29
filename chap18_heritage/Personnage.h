#pragma once

#include <string>

class Personnage
{
    public:

    Personnage();
    void recevoirDegats(int nbDegats);
    void coupDePoing(Personnage &cible) const;

    private:
    
    int m_vie;
    std::string m_nom;
};