# First rev
先宣告，後因應 (or 把 pay() 因應函數放 main() 前面也可)
```cpp
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
```

demo? [code in tree](https://github.com/hpware/sch_c/tree/e679979187a2b270f1f59c48b88d727bcb918db6/code/ch3)

# Second rev
### main.cpp
```cpp
#include "input.hpp"
#include "process.hpp"
#include "displaySalary.hpp"
int main(int argc, char** argv) {
    int workingPayFromThePayVar = salaryCalc(pay(), hoursWithPay());
    displaySalary(workingPayFromThePayVar);
    return 0;
}

```
### input.hpp
```cpp
#include <iostream>
using namespace std;
int pay() {
    cout << "請輸入終點費: ";
    int workingPayFromUser;
    cin >> workingPayFromUser;

    return workingPayFromUser;
}

int hoursWithPay() {
    cout << "YOUR PAY: ";
    int withYourHours;
    cin >> withYourHours;

    return withYourHours;
}

```
### process.hpp
```cpp
int salaryCalc(int howMuchAreYouPaid, int howMuchHoursAtYourJob) {
    int calc = howMuchAreYouPaid * howMuchHoursAtYourJob;
    return calc;
}
```
### displaySalary.hpp
```cpp
#include <iostream>
using namespace std;
void displaySalary(int calcResult) {
    cout << "工資 = " << calcResult;
}
```
