



#include "matrixswap.h"


void Randomization (int a[][3]){

    int iterations = rand() % 10;
    cout << "iterations" << iterations << endl;
    int f;

    for (f = 0; f <= iterations; f++){
        int b[3][3];
        int c[3];
        c[0] = rand() % 3;

        c[1] = c[0];
        while (c[1] == c[0]){
            c[1] = rand() % 3;
        }
        c[2] = 3 - c[0] - c[1];

        //cout << "c0" << c[0] << endl;
        //cout << "c1" << c[1] << endl;
        //cout << "c2" << c[2] << endl;

        cout << "Row switch" << endl;

        for (int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                int temp = c[i];
                b[i][j] = a[temp][j];
                cout << " " << b[i][j] << " ";
            }
            cout << endl;
        }

        a = b;

        int d[3][3];
        int r[3];
        r[0] = rand() % 3;

        r[1] = r[0];
        while (r[1] == r[0]){
            r[1] = rand() % 3;
        }
        r[2] = 3 - r[0] - r[1];

        //cout << "40" << r[0] << endl;
        //cout << "41" << r[1] << endl;
        //cout << "42" << r[2] << endl;

        cout << "Column switch" << endl;

        for (int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                int temp = r[j];
                d[i][j] = a[i][temp];
                cout << " " << d[i][j] << " ";
            }
            cout << endl;
        }

        a = d;
    }

}
