
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
void matrix::setS(int row, int col, int newNum){
    s[row][col] = newNum;
}

int matrix::getS(int row, int col){
    int x;
    x = s[row][col];
    return x;
}

matrix cipher(matrix a[3][3]){

    int r, num;
    srand(time(0));

    r = rand() % 9;

    for (int i = 1; i <= 9; i ++){
        for (int k = 1; k <= 9; k ++){
          num = getM(a, i, k);
          num += r;
          num = num % 9;
          num ++;
          setM(a, i , k , num);
        }

    }

    return a[3][3];
}


void setM(matrix m[3][3], int row, int col, int newNum){

    int srow = 0;
    int scol = 0;

    if ((row == 1) || (row == 4) || (row == 7)) {
        srow = 0;
    }
    if ((row == 2) || (row == 5) || (row == 8)) {
        srow = 1;
    }
    if ((row == 3) || (row == 6) || (row == 9)) {
        srow = 2;
    }

    if ((col == 1) || (col == 4) || (col == 7)) {
        scol = 0;
    }
    if ((col == 2) || (col == 5) || (col == 8)) {
        scol = 1;
    }
    if ((col == 3) || (col == 6) || (col == 9)) {
        scol = 2;
    }

    if ((row <= 3) && (col <= 3)){
        m[0][0].setS(srow,scol, newNum);
    }
    else if ((row <= 3) && (col <= 6)){
        m[0][1].setS(srow,scol, newNum);
    }
    else if ((row <= 3) && (col <= 9)){
        m[0][2].setS(srow,scol, newNum);
    }
    else if ((row <= 6) && (col <= 3)){
        m[1][0].setS(srow,scol, newNum);
    }
    else if ((row <= 6) && (col <= 6)){
        m[1][1].setS(srow,scol, newNum);
    }
    else if ((row <= 6) && (col <= 9)){
        m[1][2].setS(srow,scol, newNum);
    }
    else if ((row <= 9) && (col <= 3)){
        m[2][0].setS(srow,scol, newNum);
    }
    else if ((row <= 9) && (col <= 6)){
        m[2][1].setS(srow,scol, newNum);
    }
    else if ((row <= 9) && (col <= 9)){
        m[2][2].setS(srow,scol, newNum);
    }

}

int getM(matrix m[3][3], int row, int col){
    int x;

        int srow;
    int scol;

    if ((row == 1) || (row == 4) || (row == 7)) {
        srow = 0;
    }
    if ((row == 2) || (row == 5) || (row == 8)) {
        srow = 1;
    }
    if ((row == 3) || (row == 6) || (row == 9)) {
        srow = 2;
    }

    if ((col == 1) || (col == 4) || (col == 7)) {
        scol = 0;
    }
    if ((col == 2) || (col == 5) || (col == 8)) {
        scol = 1;
    }
    if ((col == 3) || (col == 6) || (col == 9)) {
        scol = 2;
    }


    if ((row <= 3) && (col <= 3)){
        x = m[0][0].getS(srow,scol);
    }
    else if ((row <= 3) && (col <= 6)){
        x = m[0][1].getS(srow,scol);
    }
    else if ((row <= 3) && (col <= 9)){
        x = m[0][2].getS(srow,scol);
    }
    else if ((row <= 6) && (col <= 3)){
        x = m[1][0].getS(srow,scol);
    }
    else if ((row <= 6) && (col <= 6)){
        x = m[1][1].getS(srow,scol);
    }
    else if ((row <= 6) && (col <= 9)){
        x = m[1][2].getS(srow,scol);
    }
    else if ((row <= 9) && (col <= 3)){
        x = m[2][0].getS(srow,scol);
    }
    else if ((row <= 9) && (col <= 6)){
        x = m[2][1].getS(srow,scol);
    }
    else if ((row <= 9) && (col <= 9)){
        x = m[2][2].getS(srow,scol);
    }

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
    //k is the passes
    for (int k = 0; k < 3; k++){
        r1 = 0;
        r2 = 0;
        r3 = 0;
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
        c1 = 0;
        c2 = 0;
        c3 = 0;
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


void display(matrix a[3][3]){
    int r[10];
    int c = 1;
    cout << "   1 2 3 4 5 6 7 8 9" << endl;
    cout << "   -----------------" << endl;
    for (int k = 0; k < 3; k++){

        int i = 0;
        for (int j = 0; j < 3; j++)
        {
                r[1] = a[k][i].getS(j,0);
                r[2] = a[k][i].getS(j,1);
                r[3] = a[k][i].getS(j,2);
                r[4] = a[k][i+1].getS(j,0);
                r[5] = a[k][i+1].getS(j,1);
                r[6] = a[k][i+1].getS(j,2);
                r[7] = a[k][i+2].getS(j,0);
                r[8] = a[k][i+2].getS(j,1);
                r[9] = a[k][i+2].getS(j,2);

                for(int b = 1; b < 10; b++)
                {
                    if(b == 1)
                    {
                        cout << c << " |";
                        c++;
                    }
                    if(r[b] == 0)
                    {
                        cout << "_";
                    }
                    else
                    {
                        cout << r[b];
                    }
                    if(b == 3 || b == 6)
                    {
                        cout << "|";
                    }
                    else
                    {
                        cout << " ";
                    }

                }
                cout << endl;
        }
        cout << "  ------------------" << endl;
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


matrix MakePuzzle(matrix p[3][3]){
  
    int row;
    int col;

    int x = 0;
    srand(time(0));
    
    int NumSwaps;
    int others;
    

    NumSwaps = 25;
    for (int i = 0; i < NumSwaps; i++){
        row = rand()%9;
        col = rand()%9;
        setM(p,row,col,x);
    }
    cout << endl;
    
    
    return p[3][3];
}

void PlayGame(matrix p[3][3]){
    int row = 0;
    int col = 0;
    int userNum = 0;
    string input;
    stringstream Transfer;
    Transfer.clear();
    cout << "Input the Row number then ";
    cout << "Input the Column number then ";
    cout << "Input number to go in square: ";
    getline(cin,input);
    cout << endl << endl;
    Transfer.str(input);
    Transfer >> row >> col >> userNum;
    setM (p,row,col,userNum);
    }
  
