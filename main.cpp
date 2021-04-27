#include <iostream>
#include "matrixswap.h"

using namespace std;

int main()
{
    matrix m[3][3], b[3][3];
    matrix s1, s2, s3, s4, test;
    matrix s5, s6, s7, s8, s9, z[3][3];
    int x;
    bool addsUp = false;



    int small1[3][3] = {{5,3,4}, {6,7,2},{1,9,8}};
    int small2[3][3] = {{6,7,8}, {1,9,5},{3,4,2}};
    int small3[3][3] = {{9,1,2}, {3,4,8},{5,6,7}};
    int small4[3][3] = {{8,5,9}, {4,2,6},{7,1,3}};
    int small5[3][3] = {{7,6,1}, {8,5,3},{9,2,4}};
    int small6[3][3] = {{4,2,3}, {7,9,1},{8,5,6}};
    int small7[3][3] = {{9,6,1}, {2,8,7},{3,4,5}};
    int small8[3][3] = {{5,3,7}, {4,1,9},{2,8,6}};
    int small9[3][3] = {{2,8,4}, {6,3,5},{1,7,9}};


    s1.readS();

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << small1[i][j] << " ";
        }
        cout << endl;
    }

    s1.fillSmallMatrix(small1);
    s2.fillSmallMatrix(small2);
    s3.fillSmallMatrix(small3);
    s4.fillSmallMatrix(small4);
    s5.fillSmallMatrix(small5);
    s6.fillSmallMatrix(small6);
    s7.fillSmallMatrix(small7);
    s8.fillSmallMatrix(small8);
    s9.fillSmallMatrix(small9);

    m[0][0] = s1;
    m[0][1] = s2;
    m[0][2] = s3;
    m[1][0] = s4;
    m[1][1] = s5;
    m[1][2] = s6;
    m[2][0] = s7;
    m[2][1] = s8;
    m[2][2] = s9;

    check(m);

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


    // THE TEST DISPLAY FUNCTION
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            m[i][j].readS();
            cout << endl;
        }

    }

    addsUp = check(m);


    cout << "does it add up? " << addsUp;

    cout << endl << endl;

    //m[3][3].display();


    return 0;
}
