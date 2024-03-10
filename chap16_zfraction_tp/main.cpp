#include <iostream>
#include "ZFraction.h"

using namespace std;

ostream& operator<<(ostream& flux, ZFraction const& fraction)
{
    fraction.affiche(flux);
    return flux;
}

int main()
{
    ZFraction a(4,6);
    ZFraction b(6,3);
    ZFraction c,d;

    c = a+b;

    d = a*b;

    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;

    if (a==b)
        cout << "a==b" << endl;
    if (a!=b)
        cout << "a!=b" << endl;
    if (a<b)
        cout << "a<b" << endl;
    if (a>b)
        cout << "a>b" << endl;
    if (a<=b)
        cout << "a<=b" << endl;
    if (a>=b)
        cout << "a>=b" << endl;

    a.simplifier();
    cout << "a simplifié : " << a << endl;
    cout << "num : " << a.numerateur() << endl;
    cout << "denominateur : " << a.denominateur() << endl;
    cout << "double : " << a.nombreRationnel() << endl;

}
