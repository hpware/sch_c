// 8~2
#include <iostream>
using namespace std;

float usd, amount, rate = 0 ;

int main() {
    cout << "TWD: ";
    cin >> amount;
    cout << "Rate: ";
    cin >> rate;
    if (rate == 0 ) {
        cout << "0 is an invalid value.";
        return 1;
    } else {
        usd = amount/rate;
        printf("USD: %f\n", usd);
    }
}
