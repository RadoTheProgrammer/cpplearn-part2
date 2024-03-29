#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
using namespace std;

int main(){
    // Personnage monPersonnage;
    // Guerrier monGuerrier;
    // monPersonnage.coupDePoing(monGuerrier);
    // monGuerrier.coupDePoing(monPersonnage);

    Personnage *monPersonnage(0);
    Guerrier *monGuerrier = new Guerrier();

    monPersonnage = monGuerrier;
    //monGuerrier = static_cast<Guerrier*>(monPersonnage);
}
