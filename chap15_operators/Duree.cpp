#include "Duree.h"
#include <iostream>
#include <string>
using namespace std;


Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
    // Constructor implementation
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}


// Implementation of operator+= of Duree:
Duree& operator+=(Duree const& a)
{
    m_secondes += a.m_secondes;
    m_minutes += a.m_minutes;
    m_heures += a.m_heures;
    if (m_secondes >= 60)
    {
        m_secondes -= 60;
        m_minutes++;
    }
    if (m_minutes >= 60)
    {
        m_minutes -= 60;
        m_heures++;
    }
    return *this;
}

Duree &Duree::operator+=(Duree const& a)
{
    m_secondes += a.m_secondes;
    m_minutes += a.m_minutes;
    m_heures += a.m_heures;
    if (m_secondes >= 60)
    {
        m_secondes -= 60;
        m_minutes++;
    }
    if (m_minutes >= 60)
    {
        m_minutes -= 60;
        m_heures++;
    }
    return *this;
}






