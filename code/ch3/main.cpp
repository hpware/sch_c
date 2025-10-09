#include <iostream>
#include "input.hpp"
using namespace std;
int pay(); // 先宣告，後因應 (or 把 pay() 因應函數放 main() 前面也可)
int main(int argc, char** argv) {
    int workingPayFromThePayVar = pay();
    cout << workingPayFromThePayVar;
    return 0;
}

int pay() {
    cout << "請輸入終點費: ";
    int workingPayFromUser;
    cin >> workingPayFromUser;

    return workingPayFromUser;
}
