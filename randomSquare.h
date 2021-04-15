#ifndef RANDOMSQUARE_H_INCLUDED
#define RANDOMSQUARE_H_INCLUDED
#include <ostream>
#include <iostream>

using namespace std;

class OtherSquares
{
    public:
        int s1[3][3], s2[3][3], s3[3][3];
        int s4[3][3], s5[3][3], s6[3][3];
        int s7[3][3], s8[3][3], s9[3][3];

        bool competedSquare = false;
    private:
        void display(ostream&);

};

#endif // RANDOMSQUARE_H_INCLUDED
