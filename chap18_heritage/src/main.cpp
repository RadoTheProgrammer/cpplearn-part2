#include <iostream>
#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
using namespace std;

int main(){
    Personnage marcel("Marcel");
    Guerrier goliath;
    marcel.coupDePoing(goliath);
    //goliath.frapperCommeUnSourdAvecUnMarteau(marcel);

    marcel.sePresenter();
    goliath.sePresenter();
    //cout << "hello2" << endl;

    // Personnage *monPersonnage(0);
    // Guerrier *monGuerrier = new Guerrier();

    // monPersonnage = monGuerrier;


    Magicien gregoire("Gregoire");
    gregoire.BouleDeFeu(marcel);
    marcel.sePresenter();
    // marcel.sePresenter();
    //monGuerrier = monPersonnage;

    //Note: objectMere est monPersonnage, et objetFille est monGuerrier
    //cout << "HELLO" << endl;
    //monGuerrier = static_cast<Guerrier*>(monPersonnage);
}
