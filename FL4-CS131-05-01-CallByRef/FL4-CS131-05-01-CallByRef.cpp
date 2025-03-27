#include <iostream>
#include <string>
using namespace std;
void callByValue1(int n);
// Precondition: n contains an integer.
// Postcondition: The user enters a number and the local variable n is updated
// but the variable passed from the calling program is not. Nothing is returned.
int callByValue2();
// Precondition: An integer is ready to receive the return value.
// Postcondition: The user enters a number and the local variable n in updated and the value of n is returned.
void callByReference(int& n);
// Precondition: An existing integer variable is passed to the function.
// Postcondition: The user enters a number and the variable passed to the function is updated with the new value.
int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	callByValue1(number);
	cout << "After callByValue1, number is " << number << endl << endl;
	system("pause");
	number = callByValue2();
	cout << "After callByValue2, number is " << number << endl << endl;
	system("pause");
	callByReference(number);
	cout << "After callByReference, number is " << number << endl << endl;
	system("pause");
	return 0;
}
void callByValue1(int n) {
	cout << "\nEnter a new number: ";
	cin >> n;
	cout << "You entered " << n << endl << endl;
	return;
}
int callByValue2() {
	int n;
	cout << "\nEnter a new number: ";
	cin >> n;
	cout << "You entered " << n << endl << endl;
	return n;
}
void callByReference(int& n) {
	cout << "\nEnter a new number: ";
	cin >> n;
	cout << "You entered " << n << endl << endl;
	return;
}