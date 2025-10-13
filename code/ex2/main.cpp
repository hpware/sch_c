#include <iostream>
using namespace std;
#include "input.hpp"
#include "process.hpp"
#include "output.hpp"

float H, W, BMI;

int main() {
    H = getH();
    W = getW();
    BMI =  evaBMI(W, H);
    output(BMI);
    return 0;
}
