#pragma once

#include <iostream>

using namespace std;

class ZFraction
{
public:
    ZFraction(int numerateur = 0, int denominateur = 1);
    void affiche(ostream& flux) const;
    ZFraction operator+(const ZFraction& other) const;
    
    // ZFraction operator+(const ZFraction& other) const;
    // ZFraction operator*(const ZFraction& other) const;
    // ZFraction operator>(const ZFraction& other) const;
    // ZFraction operator==(const ZFraction& other) const;
private:
    int m_numerateur;
    int m_denominateur;
};

int pgcd(int a, int b);