// ProjectHomework3Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    /*1) Вивести в консоль всі числа від 1 до 100 кратні 3*/

	int b = 0;


	for (int i = 0; i <= 100; i++) {
		b = i;
		if (b % 3 == 0) {
			cout << "Even" << i << endl;
		}
		else {
		}
	}

	/*2) Вивести в консоль всі числа від 1 до 100 кратні 5*/
	cout << "TASK TWO!" << endl;

	for (int i = 0; i <= 100; i++) {
		b = i;
		if (b % 5 == 0) {
			cout << "Even" << i << endl;
		}
		else {
		}
	}

	/*3) Вивести в консоль всі числа від 1 до 100 кратні 7*/
	cout << "TASK THREE!" << endl;

	for (int i = 0; i <= 100; i++) {
		b = i;
		if (b % 7 == 0) {
			cout << "Even" << i << endl;
		}
		else {
		}
	}
}

