#include <iostream>
using namespace std;

int a;
int h;
int sum;

int func() {
    cout << "鐘點費: ";
    cin >> a;
    if (a == 0) {
        cout << "鐘點費: ";
        cin >> a;
    }
    cout << "時間 (h):";
    cin >> h;
    if (h == 0) {
        cout << "時間 (h): ";
        cin >> h;
    }
    return a * h;
}

int main() {
    sum = func();
    cout << "工資 = " << sum << endl;
    return 0;
}
