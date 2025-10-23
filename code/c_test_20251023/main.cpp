#include <iostream>
#include <ncurses.h>
using namespace std;

bool loopStatus;
int ch;
int main(int argc, char** argv) {
    initscr();  // Initialize ncurses
    noecho();   // Don't echo pressed keys
    cbreak();   // Disable line buffering


    loopStatus = true;

    while (loopStatus) {
        cout << "1. Collect Resource.\n2. Enhance. \n3. Fight.\nEsc. Exit.\n";
        ch = getch();
        switch (ch) {
            case 1: {
                cout << "1" << endl;
                break;
            }
            case 0x1b: {
                loopStatus = false;
                break;
            }
        }
    }
    endwin();  // Clean up ncurses
    return 0;
}
