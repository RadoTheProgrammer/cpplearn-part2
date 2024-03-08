// To run: g++ *.cpp && ./a.out
// codes: http://openclassrooms.com/codeweb
#include <iostream>
#include "Duree.h"
int main()
{
    Duree duree1(0,0,28), duree2(0,15,2);
    Duree resultat;

    duree1.afficher();
    
    Duree resultat = duree1 + duree2;
    return 0;
}