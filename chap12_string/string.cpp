#include <iostream>
using namespace std;

int main() {
    string s1("Hello");
    string s2 = "World";
    s1 = "Hi";
    string s3 = s1 + " " + s2;
    string s4="Hi World !";
    if (s3 == s4) {
        cout << "s3 is equal to s4" << endl;
    }
    else {
        cout << "s3 is not equal to s4" << endl;
    }
    cout << s3 << endl;
    cout << "Length of string : " << s3.length() << endl;
    cout << "Size of string : " << s3.size() << endl;
    s3.erase();
    cout << "After erase : " << s3 << endl;

    cout << s4.substr(3,4) << endl;
    cout << s4[3] << endl;
    return 0;
}
