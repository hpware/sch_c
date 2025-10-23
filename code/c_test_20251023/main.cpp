#include <iostream>
#include <conio.h> // im not making this work on mac bruv
using namespace std;

bool loopStatus;
int level = 1;
int resource = 100l;
int experience = 0;
int power = 100;
int force = 1;
int defense = 100;
int enForce = 1;
int enDefence = 10;

int main(int argc, char** argv) {
    loopStatus = true;
    char ch;

    while (loopStatus) {
        cout << "等級 = " << level << ", 體能 = " << power << "\n 資源 = " << resource << ", 經驗 = " << experience << endl << endl;
        cout << "1. Collect Resource.\n2. Enhance. \n3. Fight.\nEsc. Exit.\n";
        ch = getch();
        printf("%x\n" ,ch);
        switch (ch) {
            case '1': {
               resource += 10;
                break;
            }
            case '2': {
                resource -= 10;
                if (power % 100 == 0) {
                    level++;
                    force *= 2;
                }
                break;
            }
            case '3': {
                cout << "3\n";
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
