/*
Author: Kevin Gibson, Brennan Chan, Cole Hogan, Stephanie Yue, Adam Kolodziej
Assignment Title: Sudoku Game
Assignment Description: the program auto generates a sudoku square and the user fills in
                        the underscores 
Due Date: 4/29/2021
Date Created: 3/30/2021
Date Last Modified: 4/29/2021

Data Abstraction:
                 initializes the arrays and all of the objects uilized in creating
                 the sudoku square 
Input:
                 user inputs the row, col and number they would like to replace 

Process:
                 the program takes the user data reads it and determins if the 
                 square is completed or not 

Output:
                the sudoku square and all of the user inputs are displayed

Assumptions:
                the user will enter a number not already preoccupied 
                the user will enter a valid col and row 
                the user will not edit the numbers allready in the sudoku square
*/
#include <iostream>

#include "square.h"



using namespace std;

int main()
{
    matrix m[3][3], b[3][3];
    matrix puzzle[3][3];
    matrix s1, s2, s3, s4, test;
    matrix s5, s6, s7, s8, s9, z[3][3];
    //int x;

    matrix c[3][3];
    bool addsUp = false;
    bool AreURight = false;
    bool PlayAgain = false;
    
    string input;
    string again;
    int row = 0;
    int col = 0;
    int userNum = 0;
    stringstream Transfer;
    

        
    fillBigMatirix(c);
    //display(c);
    check(c);
/*
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
    cout << endl;
    test = puzzle[0][1];
    test.readS();


    cout << endl << endl;

    x = m[0][0].getS(2,2);
    cout << x << endl;
    


    addsUp = check(c);


    cout << "does it add up? " << addsUp;

    cout << endl << endl;

*/
   

//Play the game
  cout << "How to play this Game: " << endl;
  cout << "To input a number in the grid ";
  cout << "type the row, then the column then your number." << endl;
  cout << endl;
  cout << "If you make a mistake and want to backspace ";
  cout << "Type the row and column then a _ (underscore) symbol." << endl;
  cout << "Hope you enjoy these puzzles." << endl;
    do{
        MakePuzzle(c);
        display(c);
        do{
            PlayGame(c);
            display(c);
            AreURight = check(c);
        }while(!AreURight);
        cout << "CONGRATULATIONS YOU SMARTY!"<< endl;
        cout << "If you want to play again type 1: ";
        cin >> again;
        cout << again << endl;
        if (again == "1"){
            PlayAgain = true;
        }
    }while(PlayAgain);
    
    cout << "Thanks for playing our game";
    return 0;
}
