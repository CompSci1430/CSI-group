
#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include <iostream>
#include <cmath>
#include <sstream>
#include <time.h>
#include <iomanip>

using namespace std;



class matrix{

    private:
    int s[3][3]= {{5,3,4}, {6,7,8},{9,1,2}};
    int z;

    public:
    //could do more
    matrix();
    int getS(int row, int col);
    void setS(int row, int col, int newNum);
    void readS();
    void fillSmallMatrix(int a[3][3]);
};

//UPDATAED: fills the big matrix to be used in main
matrix fillBigMatirix(matrix a[3][3]);

//UPDATED: displays the big matrix
//TODO: update to put underscores where
void display(matrix a[3][3]);

matrix Random(matrix a[3][3]);
void setM(matrix m[3][3], int row, int col, int newNum);
int getM(matrix m[3][3], int row, int col);
bool check(matrix a[3][3]);

matrix MakePuzzle(matrix p[3][3]);
matrix cipher(matrix a[3][3]);

void PlayGame(matrix p[3][3]);
#endif // SQUARE_H_INCLUDED
