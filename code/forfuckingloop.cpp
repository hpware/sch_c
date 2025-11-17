#include <iostream>
using namespace std;

int total;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 1; i <=97; i++) {
        if (i % 2 != 0 && isPrime(i)) {
            cout << i;
            if (i != 97) cout << "+";
            total += i;
        }
    }
    cout << "\n=" << total;
    return 0;
}
