#include "square.h"

matrix::matrix(){
    s[3][3];
}

void matrix::fillSmallMatrix(int a[3][3]){

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                s[i][j] = a[i][j];
        }
    }
}


int matrix::getS(int row, int col){
    int x;
    x = s[row][col];
    return x;
}

void matrix::readS(){

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}

matrix Random(matrix a[3][3]){

    matrix b[3][3];
    matrix d[3][3];

    srand(time(0));

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            b[i][j] = a[i][j];
            d[i][j] = a[i][j];
        }
    }


    int iterations = rand() % 10;
    cout << "iterations" << iterations << endl;
    int f;

    for (f = 0; f <= iterations; f++){

        int c[3];
        c[0] = rand() % 3;

        c[1] = c[0];
        while (c[1] == c[0]){
            c[1] = rand() % 3;
        }
        c[2] = 3 - c[0] - c[1];

        cout << "Row switch" << endl;

        for (int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                int temp = c[i];
                b[i][j] = a[temp][j];
            }
        }

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                a[i][j] = b[i][j];

            }
        }


        int r[3];
        r[0] = rand() % 3;

        r[1] = r[0];
        while (r[1] == r[0]){
            r[1] = rand() % 3;
        }
        r[2] = 3 - r[0] - r[1];

        cout << "Column switch" << endl;

        for (int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                int temp = r[j];
                d[i][j] = a[i][temp];
            }
        }

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                a[i][j] = d[i][j];

            }
        }

    }

    return a[3][3];
}

bool check(matrix a[3][3]){
    bool works = true;
    string work = "true";
    int r1, r2, r3, c1 , c2, c3;

    for (int k = 0; k < 3; k++){
        r1 = 0, r2 = 0, r3 = 0;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                r1 += a[k][i].getS(0,j);
                r2 += a[k][i].getS(1,j);
                r3 += a[k][i].getS(2,j);
            }
        }
        if ((r1 != 45) || (r2 != 45) || (r3 != 45)){
            works = false;
        }
    }
    for (int k = 0; k < 3; k++){
        c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                c1 += a[i][k].getS(j,0);
                c2 += a[i][k].getS(j,1);
                c3 += a[i][k].getS(j,2);
            }
        }
        if ((c1 != 45) || (c2 != 45) || (c3 != 45)){
            works = false;
        }
    }
    return works;
}

void display(matrix a[3][3])
{
    int r1, r2, r3, r4, r5, r6, r7, r8, r9;
    for (int k = 0; k < 3; k++){

        int i = 0;
        for (int j = 0; j < 3; j++)
        {
                r1 = a[k][i].getS(j,0);
                r2 = a[k][i].getS(j,1);
                r3 = a[k][i].getS(j,2);
                r4 = a[k][i+1].getS(j,0);
                r5 = a[k][i+1].getS(j,1);
                r6 = a[k][i+1].getS(j,2);
                r7 = a[k][i+2].getS(j,0);
                r8 = a[k][i+2].getS(j,1);
                r9 = a[k][i+2].getS(j,2);
                //if()

                cout << r1 << " " << r2 << " " << r3 << "|";
                cout << r4 << " " << r5 << " " << r6 << "|";
                cout << r7 << " " << r8 << " " << r9 << endl;
        }
        cout << "-----------------" << endl;
    }
}

matrix fillBigMatirix(matrix a[3][3])
{

    matrix s1, s2, s3, s4, s5, s6, s7, s8, s9;

    int small1[3][3] = {{5,3,4}, {6,7,2},{1,9,8}};
    int small2[3][3] = {{6,7,8}, {1,9,5},{3,4,2}};
    int small3[3][3] = {{9,1,2}, {3,4,8},{5,6,7}};
    int small4[3][3] = {{8,5,9}, {4,2,6},{7,1,3}};
    int small5[3][3] = {{7,6,1}, {8,5,3},{9,2,4}};
    int small6[3][3] = {{4,2,3}, {7,9,1},{8,5,6}};
    int small7[3][3] = {{9,6,1}, {2,8,7},{3,4,5}};
    int small8[3][3] = {{5,3,7}, {4,1,9},{2,8,6}};
    int small9[3][3] = {{2,8,4}, {6,3,5},{1,7,9}};

    s1.fillSmallMatrix(small1);
    s2.fillSmallMatrix(small2);
    s3.fillSmallMatrix(small3);
    s4.fillSmallMatrix(small4);
    s5.fillSmallMatrix(small5);
    s6.fillSmallMatrix(small6);
    s7.fillSmallMatrix(small7);
    s8.fillSmallMatrix(small8);
    s9.fillSmallMatrix(small9);

    a[0][0] = s1;
    a[0][1] = s2;
    a[0][2] = s3;
    a[1][0] = s4;
    a[1][1] = s5;
    a[1][2] = s6;
    a[2][0] = s7;
    a[2][1] = s8;
    a[2][2] = s9;

    return a[3][3];
}

