#include <iostream>

using namespace std;


int main() {

	double number1, number2, number3;

	cout << "ENTER ANY THREE NUMBERS" << endl << endl << endl;


	cout << "Enter the first number" << endl << endl;

	cin >> number1;

	cout << " Enter the second number" << endl << endl; 

	cin >> number2;

	cout << "Enter the third number" << endl << endl;

	cin >> number3;


	if (number1 >= 10 && number1 <= 20) {

		double sum = number1 + number2 + number3;

		cout << ": The sum is = " << sum << endl << endl;
	}
	else { cout << ": The number " << number1 << " is not between 10 and 20" << endl << endl; }

	if (number2 >= 20 && number2 <= 30) {

		double product = number1 * number2 * number3;

		cout << ": The product is = " << product << endl << endl;
	}
	else { cout << ": The number " << number3 << " is not between 20 and 30" << endl << endl; }

	if (number3 <= 5) {

		double results = (number1 + number2) * number3;

		cout << ": The results are = " << results << endl << endl;
	}
	else { cout << ": The number " << number3 << " is not less than 5" << endl << endl; }



	return 0;

}



