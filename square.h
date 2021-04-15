#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
#include <iostream>
#include <cmath>

using namespace std;

class BaseSquare
{
    public:
        int s1[3][3], s2[3][3], s3[3][3];
        int s4[3][3], s5[3][3], s6[3][3];
        int s7[3][3], s8[3][3], s9[3][3];
    private:
        void populateArrays();

};


#endif // SQUARE_H_INCLUDED
