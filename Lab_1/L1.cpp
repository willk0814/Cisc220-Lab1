/* Luke Grippa, Will Koenig, and Kyle Ernst
 * Daniel Gaston
 * 2/21/19
 * This file contains functions for lab 1. The functions aren't necessarily related
 * in any way other than that they are required for lab 1.
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

void lineOfStars();
bool isPrime(int x);
int sum();
int howManyTerms();
int multTables(int x);
void multTables2();
int collatzConjecture();
void leapYear();
int bigX(int x);
int copyProblem4(int x, int y);

int main() {
	cout << "Problem 1" << endl;
	cout << "Hello World!" << endl; // This line prints out "Hello World!" to the console
	lineOfStars();

	cout << "Problem 2" << endl;
	lineOfStars();

	cout << "Problem 3" << endl;
	isPrime(7);
	isPrime(12);
	isPrime(22);
	lineOfStars();

	cout << "Problem 4" << endl;
	sum();
	lineOfStars();

	cout << "Problem 5" << endl;
	howManyTerms();
	lineOfStars();

	cout << "Problem 6" << endl;
	multTables(1);
	cout << " " << endl;
	multTables(2);
	cout << " " << endl;
	multTables(3);
	lineOfStars();

	cout << "Problem 7" << endl;
	multTables2();
	lineOfStars();

	cout << "Problem 8" << endl;
	collatzConjecture();
	collatzConjecture();
	collatzConjecture();
	lineOfStars();

	cout << "Problem 9" << endl;
	leapYear();
	lineOfStars();


	cout << "Problem 10" << endl;
	bigX(3);
	bigX(4);
	bigX(5);
	lineOfStars();

	cout << "Problem 11" << endl;
	copyProblem4(1,6);
	copyProblem4(6,8);
	copyProblem4(10,14);
	lineOfStars();
}

/* Problem 2 - there are no input parameters for this function,
 * all it does is use the cout function to print a line of
 * asterisks to the console. This function will be used after
 * every problem is completed.
 */
void lineOfStars() {
	cout << "****************************************" << endl;
}

/* Problem 3 - this function uses a while loop to test whether or
 * not the input value is a prime number. The input parameter is
 * the value that gets tested.
 */
bool isPrime(int x) {
	int p = 2;
	int a = 0;
	while (p < x) {
		if (x % p == 0) {
			a = 1;
			cout << "false" << endl;
			break;
		}
		p++;
	}
	if (a == 0) {
		cout << "true" << endl;
	}
}

/* Problem 4 - this function takes no input parameters. The purpose of
 * this function is to calculate the sum of values from 1 to 300 returning
 * every sum along the way that is a multiple of 20. We use a for loop with
 * an if loop nested inside for the function to work properly.
 */
int sum() {
	int x = 0;
	for (int i = 0; i < 301; i++) {
		x += i;
		if (x % 20 == 0) {
			cout << x << endl;
		}
	}
}

/* Problem 5 - this function takes no input parameters. This function uses a
 * while loop to sum integers from 1 up until the sum reaches a value greater
 * than 100,000 and returns how many integers it took.
 */
int howManyTerms() {
	int sum = 0;
	int count = 1;
	while (sum < 100001) {
		sum += count;
		count++;
		}
	cout << count << endl;
}
/* Problem 6 - this function has one integer parameter and prints out the multiplication
 * tables the inputted number and values 1-12
 */
int multTables(int x) {
	for (int i = 1; i < 13; i++) {
		cout << x << " * " << i << " = " << (x * i) << endl;
	}
}

/* Problem 7 - this function takes in no parameters and uses the previous
 * function to loop through numbers 1 -12 and print out the multiplication
 * tables for each
 */
void multTables2() {
		int a = 1;
		while (a <= 12){
			multTables(a);
			a++;
		}
	}

/* Problem 8 - this function has one integer parameter.  Using the Collatz
 * conjecture we test how many loops through the function it will take
 * before the inputted value is reduced to 0
 */
int collatzConjecture() {
	int x;
	cout << "Input a natural positive number:" << endl;
	cin >> x;
	int count = 0;
	while (x != 1) {
		count++;
		if (x % 2 == 0) {
			x = (x / 2);

		} else {
			x = (x * 3) + 1;
		}
	}
	cout << count << endl;
}

/* Problem 9 - this function has no parameters and checks each year
 * (beginning with 2017) for the next 400 to see if it is a leap year.  
 * It does this by checking the year against a set of rules provided to us
 */
void leapYear() {
	for (int i = 2017; i < 2418; i++) {
		if (i % 4 == 0) {
			if (i % 100 == 0) {
				if (i % 400 == 0)
					cout << i << endl;
			} else
				cout << i << endl;
		}
	}

}

/* Problem 10 - this function takes in one parameter which is the
 * size of one “leg” of the x.  The function then prints the specified
 * number of asterisks with uniform spacing to the console
 */
int bigX(int x) {
	int size = x * 2;
	if (size % 2 == 0) {
		size++;
	}
	for (int rows = 1; rows <= size; rows++) {
		for (int cols = 1; cols <= size; cols++) {
			if (rows == cols || cols == (size + 1) - rows) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;

	}
}

/* Problem 11 - this function takes in two integer parameters and prints
 * each value in between them and tests it in the collatz conjecture. It
 * then prints the "Collatz Conjecture is still working" if it returns a 1
 */
int copyProblem4(int x, int y) {
	for (int i = x; i < y; i++) {
		cout << i << endl;
		while (x != 1) {
				if (x % 2 == 0) {
					x = (x / 2);

				} else {
					x = (x * 3) + 1;
				}
			}
		cout << "Collatz Conjecture is still working" << endl;
	}
}
