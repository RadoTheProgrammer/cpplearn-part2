#include "Guerrier.h"
#include <iostream>

using namespace std;

void Guerrier::frapperCommeUnSourdAvecUnMarteau(Personnage &cible) const
{
    cible.recevoirDegats(20);
    //cout << "Le guerrier frappe comme un sourd avec un marteau" << endl;

}

void Guerrier::sePresenter() const
{
    Personnage::sePresenter();
    std::cout << "Je suis un guerrier redoutable" << std::endl;
}