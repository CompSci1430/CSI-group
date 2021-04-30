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
description: series of random transformations that will
             not impact check, but will create a new board
return: matrix
precondition: matrix (3x3 of 3x3's)
postcondition: a new game board is randomly created
*/
matrix Random(matrix a[3][3]);
/*
description: reasign or set position in 9x9 matrix
return: void (matrix b/c uses sets() function inside)
precondition: big matrix, row, column and new number
postcondition: big matrix will have a new or changed value
*/
void setM(matrix m[3][3], int row, int col, int newNum);
/*
description: Get integer in specified position
return: int
precondition: 9x9 matrix, row and column
postcondition: the integer in the specified position of the 9x9
*/
int getM(matrix m[3][3], int row, int col);
/*
description: check each row and column = 45
return: bool
precondition: 9x9 matrix (3x3 of 3x3's)
postcondition: true if all 45, false otherwise
*/
bool check(matrix a[3][3]);

/*
description: Program makes the puzzle for the user
return: returns the puzzle matrix
precondition: There is a template shuffled matrix
postcondition: There is a copied matrix for user use
*/
matrix MakePuzzle(matrix p[3][3]);
/*
description: shifts the digits to disguise the game board
return: matirx
precondition: we have a full matrix game board
postcondition: a game board that still works but is disguised
*/
matrix cipher(matrix a[3][3]);

/*
description: Lets user interact with the matrix
return: void
precondition: There is a puzzle matrix 
postcondition: User can input into and interact with the matrix
*/
void PlayGame(matrix p[3][3]);
#endif // SQUARE_H_INCLUDED
