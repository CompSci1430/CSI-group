



#include "matrixswap.h"


/*
IF THIS DOESNT WORK
transform all of the s matracies by reassigning them to t1 - t9
then at the end put them back to the s's
*/

//I think i will need to make a matrix object, then put one small matrix in each object;
//create a function to fill 9 of these matracies
//then put the matrix object in each position of the large matrix
// i will also need to change the matrix swap to matrix objects, not integer matracies





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
/*
void display(){

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            m[i][j].readS();
        }

    }
}
*/

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

        //cout << "c0" << c[0] << endl;
        //cout << "c1" << c[1] << endl;
        //cout << "c2" << c[2] << endl;

        cout << "Row switch" << endl;

        for (int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                int temp = c[i];



                // create a get function to fill b[i][j]



                b[i][j] = a[temp][j];
                //cout << " " << b[i][j] << " ";
            }
            //cout << endl;
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

        //cout << "40" << r[0] << endl;
        //cout << "41" << r[1] << endl;
        //cout << "42" << r[2] << endl;

        cout << "Column switch" << endl;

        for (int i = 0; i < 3; i++){
            for( int j = 0; j < 3; j++){
                int temp = r[j];
                d[i][j] = a[i][temp];
               //cout << " " << d[i][j] << " ";
            }
            //cout << endl;
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
        //cout << r1 << " - " << r2 << " - " << r3 << endl;
        if ((r1 != 45) || (r2 != 45) || (r3 != 45)){
            works = false;
            //work = "false";

        }
    }
    //cout <<" row" << work << endl;

    for (int k = 0; k < 3; k++){
        c1 = 0, c2 = 0, c3 = 0;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                c1 += a[i][k].getS(j,0);
                c2 += a[i][k].getS(j,1);
                c3 += a[i][k].getS(j,2);
                //a[i][k].readS();
                //cout << c1 << " - " << c2 << " - " << c3 << endl;
            }

        }

        //cout << c1 << " - " << c2 << " - " << c3 << endl;
        if ((c1 != 45) || (c2 != 45) || (c3 != 45)){
            works = false;
            //work = "false";

        }
    }
    //cout << "col" << work << endl;
    return works;
}



