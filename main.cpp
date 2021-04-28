#include <iostream>
#include "square.h"

using namespace std;

int main()
{
    matrix m[3][3], b[3][3];
    matrix s1, s2, s3, s4, test;
    matrix s5, s6, s7, s8, s9, z[3][3];
    int x;
    matrix c[3][3];
    bool addsUp = false;

    fillBigMatirix(c);
    display(c);
    check(c);

    x = s1.getS(0,0);
    cout << x << endl;
    cout << "READ TOP LEFT" << endl;
    s2.readS();
    x = s2.getS(0,0);
    cout << x << endl;

    b[0][0] = m[0][0];
    test = b[0][0];
    cout << "read test" << endl;
    test.readS();
    z[3][3] = Random(m);

    z[0][0] = m[0][0];
    test = z[0][0];
    cout << "read test z" << endl;
    test.readS();


    cout << endl << endl;

    x = m[0][0].getS(2,2);
    cout << x << endl;



    addsUp = check(c);


    cout << "does it add up? " << addsUp;

    cout << endl << endl;

    display(c);


    return 0;
}
