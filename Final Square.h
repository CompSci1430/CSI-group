/*
Author: Kevin Gibson, Brennan Chan, Cole Hogan, Stephanie Yue, Adam Kolodziej
Assignment Title: Sudoku Game
Assignment Description: the program auto generates a sudoku square and the user fills in
                        the underscores 
Due Date: 4/29/2021
Date Created: 3/30/2021
Date Last Modified: 4/29/2021
*/
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

/*
description: Fills the big array matrix that holds the actual square
return: nothing
precondition: all of the arrays exist
postcondition: The big sudoku square will be created and possible to complete
*/
matrix fillBigMatirix(matrix a[3][3]);

/*
description: displays the sudoku square
return: nothing
precondition: all data in the squre is valid 
postcondition: the square will be displayed to the screen
*/
void display(matrix a[3][3]);

/*
description:
return:
precondition:
postcondition:
*/
matrix Random(matrix a[3][3]);
/*
description:
return:
precondition:
postcondition:
*/
void setM(matrix m[3][3], int row, int col, int newNum);
/*
description:
return:
precondition:
postcondition:
*/
int getM(matrix m[3][3], int row, int col);
/*
description:
return:
precondition:
postcondition:
*/
bool check(matrix a[3][3]);

/*
description:
return:
precondition:
postcondition:
*/
matrix MakePuzzle(matrix p[3][3]);
/*
description:
return:
precondition:
postcondition:
*/
matrix cipher(matrix a[3][3]);

/*
description:
return:
precondition:
postcondition:
*/
void PlayGame(matrix p[3][3]);
#endif // SQUARE_H_INCLUDED
