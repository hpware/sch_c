#include <cstdlib>
#include <iostream>
#include <conio.h> // 蘋果沒有這個東西 :(   ('conio.h' file not found (clang pp_file_not_found))
#include <stdli.h>
#include <time.h>
#include "GameFunXCodeCP.hpp"
using namespace std;

int main(int argc, char** argv) {
    srand(time(NULL));
    bool status = true;
    while (status) {
        Menu();
        char ch = getch(); // error
        switch (ch) {
            // case 1
            case '1': {
                GetResource();
                break;
            }
            // case 2
            case '2': {
                Enhance();
                break;
            }
            // case 3
            case '3': {
                if (!Attack()) {
                    status = false;
                }
                // or `status = Attack()` for direct data pulling
                break;
            }
            // esc key
            case 0x1b: {
                status = false;
            }
        }
        FindNewResource(100);
    }
    return 0;
}
