#include "ZFraction.h"
#include <iostream>

using namespace std;
int pgcd(int a, int b)
{
    while (b != 0)
    {
        const int t = b;
        b = a%b;
        a=t;
    }
    return a;
}

ZFraction::ZFraction(int numerateur, int denominateur)
        : m_numerateur(numerateur), m_denominateur(denominateur) {}

// ZFraction ZFraction::operator+(const ZFraction& other) const
// {
//     int newNumerateur = (m_numerateur * other.m_denominateur) + (other.m_numerateur * m_denominateur);
//     int newDenominateur = m_denominateur * other.m_denominateur;
//     int gcd = pgcd(newNumerateur, newDenominateur);
//     newNumerateur /= gcd;
//     newDenominateur /= gcd;
//     return ZFraction(newNumerateur, newDenominateur);
// }

void ZFraction::affiche(ostream& flux) const
{
    if(m_denominateur == 1)
    {
        flux << m_numerateur;
    }
    else
    {
        flux << m_numerateur << "/" << m_denominateur;
    }
}

ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie+=b;
    return copie;
}

ZFraction& ZFraction::operator+=(ZFraction const& other)
{
    m_numerateur = m_numerateur * other.m_denominateur + m_denominateur * other.m_numerateur;
    m_denominateur *= m_denominateur;

    return *this;
}

ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction copie(a);
    copie*=b;
    return copie;
}

ZFraction& ZFraction::operator*=(ZFraction const& other)
{
    cout << m_numerateur << " " << other.m_numerateur << endl;
    m_numerateur *= other.m_numerateur;
    m_denominateur *= other.m_denominateur;
    cout << m_numerateur << " " << other.m_numerateur << endl;
    cout << m_denominateur << endl;
    return *this;
}



bool ZFraction::estEgal(ZFraction const& other) const
{
    if (m_numerateur == other.m_numerateur && m_denominateur == other.m_denominateur) {
        return true;
    } else {
        return false;
    }
}

bool operator==(ZFraction const& a, ZFraction const& b)
{
    if (a.estEgal(b))
        return true;
    else
        return false;
}

bool operator!=(ZFraction const& a, ZFraction const& b)
{
    return !(a == b);
}



