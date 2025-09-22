#include <iostream>
#include "test6-f-text2.hpp" // test6.hpp for text2.cpp
using namespace std;
int A[] = {1,2,3,4,5};
float newnewnew = 210.123;

void newLineInConsole() {
    cout << "\n";
}

int main (int argc, char** argv) {
    //cout << newnewnew;
    printf("f=%-10.2fabcdef",newnewnew);
    newLineInConsole();
    cout << sizeof(A) / sizeof(int);
    newLineInConsole();
    cout << x;
    newLineInConsole();
    cout << sizeof(x);
    return 0;
}
