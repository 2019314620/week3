#include <iostream>
#include <stdlib.h>
#include "math_func.h"

using namespace std;

int main(int argc, char **argv)
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    char *op = argv[3];
    float c = atof(argv[4]);

    cout << math_func(a) << " ";
    cout << math_func(a, b, op) << " ";
    math_func(a, b, op, c);
    cout << c << endl;

    return 0;
}

