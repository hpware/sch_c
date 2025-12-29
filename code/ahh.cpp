#include <iostream>
#include <cmath>
using namespace std;

int numbers[10];

//Use the keyboard enter 10 numbers, seperately display these 10 numbers. Also other things...
void ReturnData(char* dataType, int data[10]) {
	cout << dataType << ": ";
	for (int i =0; i < 10; i++) {
		cout << data[i];
		if (i != 9)cout << ", ";
	};
	cout << endl;
}

// 1. ¥Ñ¤p¨ì¤j±Æ¦C
void cata() {
	int bubbleSort[10];
	// pull numbers fromthe numbers[i] int block;
    for (int i = 0; i < 10; i++) {
        bubbleSort[i] = numbers[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (bubbleSort[j] > bubbleSort[j + 1]) {
                int temp = bubbleSort[j];
                bubbleSort[j] = bubbleSort[j + 1];
                bubbleSort[j + 1] = temp;
            }
        }
    }

    ReturnData("¥Ñ¤p¨ì¤j±Æ¦C", bubbleSort);
}

void checkIfNumberCanBe3(int slashNum) {
	cout << slashNum <<  "ªº­¿¼Æ: ";
	int numbersThatCanbeSlashed = 0;
	bool firstNum = false;
    for (int i=0; i < 10; i++) {
		if (numbers[i] % slashNum == 0) {
			if (firstNum == false) firstNum = true;
			else cout << "+";
			cout << numbers[i];
			numbersThatCanbeSlashed += numbers[i];
		}
	}
	cout << "=" << numbersThatCanbeSlashed << endl;
}

void checkIfNumberCanBe5(int slashNum) {
	cout << slashNum <<  "ªº­¿¼Æ: ";
	int numbersThatCanbeSlashed = 0;
	bool firstNum = false;
    for (int i=0; i < 10; i++) {
		if (numbers[i] % slashNum == 0) {
			if (firstNum == false) firstNum = true;
			else cout << "+";
			cout << numbers[i];
			numbersThatCanbeSlashed += numbers[i];
		}
	}
	cout << "=" << numbersThatCanbeSlashed << endl;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


void primeNumbers() {
	bool firstNum = false;
	for (int i = 0; i < 10; i++) {
    	if (numbers[i] % 2 != 0 && isPrime(numbers[i])) {
    		if (firstNum == false) firstNum = true;
			else cout << ", ";
            cout << numbers[i];
        }
    }
}

// master function
int main() {
	for (int i =0; i <10; i++) {
		cout << "²Ä" << i + 1 << "­Ó¼Æ¦r: ";
		cin >> numbers[i];
	};
	ReturnData("§A©Ò¿é¤Jªº¼Æ¦r", numbers);
	cata(); // 1. ¥Ñ¤p¨ì¤j±Æ¦C
	checkIfNumberCanBe3(3); // 2.
	checkIfNumberCanBe5(5); // 3.
	primeNumbers(); // 4.
	return 0;
}
