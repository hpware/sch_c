#include <iostream>
#include <conio.h> // ARRR MAC DOESN'T WORK
#include <stdlib.h>
#include <time.h>

using namespace std;

char key;
int main(int argc, char** argv) {
    srand(time(NULL));
    key = getch();
    while (true) {
        if (key == 0x1b) {
            break;
        } else {
            cout << rand()%100 << endl;
            key = getch();
        }
    }
    return 0;
}
