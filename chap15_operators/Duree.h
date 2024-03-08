#pragma once

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes = 0);

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

Duree operator+(Duree const& a, Duree const& b);
Duree operator+=(const Duree &duree2);