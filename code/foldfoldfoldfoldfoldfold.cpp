// 7~2
#include <iostream>
using namespace std;

float folding;
int t2;

int main() {
    cout << "CM: ";
    cin >> folding;
    cout << endl;
    while (folding >= 20) {
        folding = folding/2;
        t2 += 1;
    }
    cout << "折了 " << t2 << " 次" << endl;
    cout << "最後長度" << folding << endl;
    return 0;
}
