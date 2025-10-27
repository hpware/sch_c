#include <iostream>
#include

using namespace std;

char key;
int main(int argc, char** argv) {
    key = getch();
    while (true) {
        if (key == 0x1b) {
            break;
        } else {
            printf("%x\n", key);
            key = getch();
        }
    }
    return 0;
}
