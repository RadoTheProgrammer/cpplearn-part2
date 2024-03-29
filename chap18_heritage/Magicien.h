#pragma once

#include <iostream>
#include <string>
#include "Personnage.h"

class Magicien : public Personnage
{
    public:
        void BouleDeFeu() const;
        void BouleDeGlace() const;

    private:
        int m_mana;
};