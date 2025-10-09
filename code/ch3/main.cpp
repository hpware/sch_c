#include "input.hpp"
#include "process.hpp"
#include "displaySalary.hpp"
int main(int argc, char** argv) {
    int workingPayFromThePayVar = salaryCalc(pay(), hoursWithPay());
    displaySalary(workingPayFromThePayVar);
    return 0;
}
