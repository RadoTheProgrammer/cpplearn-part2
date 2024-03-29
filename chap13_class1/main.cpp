#include <iostream>
#include "Personnage.h"

using namespace std;

// int main(){
//     Personnage david,goliath("Épée aiguisée", 20);

//     cout << "Hello World" << endl;
//     goliath.attaquer(david);
//     david.boirePotionDeVie(20);
//     goliath.attaquer(david);
//     david.attaquer(goliath);

//     goliath.changerArme("Double hache tranchante", 40);
//     goliath.attaquer(david);
    
//     cout << "David" << endl;
//     david.afficherEtat();
//     cout << endl << "Goliath" << endl;
//     goliath.afficherEtat();

//     return 0;
// }

int main(){
    Personnage david,goliath("Épée aiguisée", 20);

    david = goliath;

    david.afficherEtat();

    goliath.afficherEtat();
    return 0;
}
