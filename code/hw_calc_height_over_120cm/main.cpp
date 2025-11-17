#include <iostream>
using namespace std;
int main() {
    int userHeight;
    cout << "請輸入身高：";
    cin >> userHeight;
    if (userHeight > 120) cout << "請購買全票" << endl;
    else cout << "你可以購買半票" << endl;
    return 0;
}
