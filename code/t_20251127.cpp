#include <iostream>
using namespace std;

int ok(int x) {
    static int a=1; // if you make this a global value it would also have the same effect as well as the static in a value (this just stop other functions getting this value)
    a = a + x; // or a += x;
    return a;
}

int main(int argc, char** argv) {
    int x = 10; // set init value
    cout << "run 1" << ok(x) <<endl;
    cout << "run 2" << ok(ok(x)) <<endl;
    cout << "run 3" << ok(ok(ok(x))) <<endl;
}

// So static will be a static value even tho function is done. Here is the gist.
// when you run fun once like x = ok(x); x will be 11
// when you it the second time x will turn 22, because the `static int a` value retains the last value.
// when you run it another time x will turn 44, etc etc etc...
