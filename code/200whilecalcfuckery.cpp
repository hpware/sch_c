#include <iostream>
using namespace std;

int folding, t2;

int main() {
    cout << "CM: ";
    cin >> folding;
    cout << endl;
    while (folding >= 20) {
        folding = folding/2;
        t2 += 1;
    }
    cout << "Folded " << t2 << "Times" << endl;
    return 0;
}
