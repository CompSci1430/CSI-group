#ifndef RANDOMSQUARE_H_INCLUDED
#define RANDOMSQUARE_H_INCLUDED
#include <ostream>
#include <iostream>

using namespace std;

class OtherSquares
{
    public:
        int s1[3][3] = {{5,3,4}, {6,7,8}, {9,1,2}};
        int s2[3][3] = {{6,7,2}, {1,9,5}, {3,4,8}};
        int s3[3][3] = {{1,9,8}, {3,4,2}, {5,6,7}};
        int s4[3][3] = {{8,5,9}, {7,6,1}, {4,2,3}};
        int s5[3][3] = {{4,2,6}, {8,5,3}, {7,9,1}};
        int s6[3][3] = {{7,1,3}, {9,2,4}, {8,5,6}};
        int s7[3][3] = {{9,6,1}, {5,3,7}, {2,8,4}};
        int s8[3][3] = {{2,8,7}, {4,1,9}, {6,3,5}};
        int s9[3][3] = {{3,4,5}, {2,8,6}, {1,7,9}};

        bool competedSquare = false;
    private:
        void display(ostream&);

};

#endif // RANDOMSQUARE_H_INCLUDED
