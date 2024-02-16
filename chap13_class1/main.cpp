#include <iostream>
#include "Personnage.h"

using namespace std;

int main() {
    Personnage david, goliath;
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    return 0;
}