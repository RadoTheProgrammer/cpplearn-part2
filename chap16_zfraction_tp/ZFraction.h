#pragma once

#include <iostream>

using namespace std;

class ZFraction
{
public:
    ZFraction(int numerateur = 0, int denominateur = 1);
    void affiche(ostream& flux) const;
    ZFraction& operator+=(ZFraction const& other);
    ZFraction& operator*=(ZFraction const& other);
    bool estEgal(ZFraction const& other) const;
    bool estPlusPetitQue(ZFraction const& other) const;
    void simplifier();
    int numerateur() const;
    int denominateur() const;
    double nombreRationnel() const;
    // ZFraction operator+(const ZFraction& other) const;
    // ZFraction operator*(const ZFraction& other) const;
    // ZFraction operator>(const ZFraction& other) const;
    // ZFraction operator==(const ZFraction& other) const;
private:
    int m_numerateur;
    int m_denominateur;
};

int pgcd(int a, int b);
ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);
bool operator==(ZFraction const& a, ZFraction const& b);
bool operator!=(ZFraction const& a, ZFraction const& b);
bool operator<(ZFraction const& a, ZFraction const& b);
bool operator>(ZFraction const& a, ZFraction const& b);
bool operator<=(ZFraction const& a, ZFraction const& b);
bool operator>=(ZFraction const& a, ZFraction const& b);
