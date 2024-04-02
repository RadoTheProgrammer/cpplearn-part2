#pragma once

#include <iostream>
#include <string>
#include "Personnage.h"

class Magicien : public Personnage
{
    public:
        void BouleDeFeu(Personnage &cible) const;
        void BouleDeGlace() const;
        Magicien();
        Magicien(std::string nom);

    private:
        int m_mana;
};