#include <iostream>

using namespace std;

float a ,b ,c;
int main() {
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    float ff = b*b-4*a*c;
    if (ff < 0) {
        cout << "共軛虛根" << endl;
    } else if (ff == 0) {
        cout << "同根" << endl;
    } else {
        cout << "異根" << endl;
    }
    return 0;
}
