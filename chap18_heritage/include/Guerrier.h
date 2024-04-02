#pragma once

#include <iostream>
#include <string>
#include "Personnage.h"

class Guerrier : public Personnage
{
    public:
        void frapperCommeUnSourdAvecUnMarteau(Personnage &cible) const;
        void sePresenter() const;
};