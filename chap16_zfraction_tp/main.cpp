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
    ZFraction a(4,5);
    ZFraction b(4,5);
    ZFraction c,d;
    cout << a << endl;
    c = a+b;

    d = a*b;

    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;

    if (a==b)
        cout << "a est egal a b" << endl;
    if (a!=b)
        cout << "a pas egal a b" << endl;
    // if (a > b)
    //     cout << "a est plus grand que b" << endl;
    // else if (a==b)
    //     cout << "a est egal a b" << endl;
    // return 0;
}
