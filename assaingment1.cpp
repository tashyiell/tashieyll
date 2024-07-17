#include <iostream>

using namespace std;


int main() {

	double number1, number2, number3;
	
//PROMPT OR INSTRUCT THE USER TO ENTER ANY NUMBER

	cout << "ENTER ANY THREE NUMBERS" << endl << endl << endl;


	cout << "Enter the first number" << endl << endl;

	cin >> number1;

	cout << " Enter the second number" << endl << endl; 

	cin >> number2;

	cout << "Enter the third number" << endl << endl;

	cin >> number3;

//ALLOW THE COMPILER TO EXECUTE ANY ASSAINGED ACCODING TO THE CONDITIONS

	if (number1 >= 10 && number1 <= 20) {
	    
//ADD ALL THE ENTERD NUMBERS

		double sum = number1 + number2 + number3;

		cout << ": The sum is = " << sum << endl << endl;
	}

	else if  (number2 >= 20 && number2 <= 30) {

//MULTIPLY ALL THE THREE NUMBERS IF CONDITION WAS MET

		double product = number1 * number2 * number3;

		cout << ": The product is = " << product << endl << endl;
	}
	
	else	if (number3 <= 5) {

//ADD THE FIRST AND SECOND NUMBER AND MULTIPLY IT BY THE THIRD NUMBER IF CONDITION WAS MET

		double results = (number1 + number2) * number3;

		cout << ": The results are = " << results << endl << endl;
	} 
	
	// ALLOW THE EXECUTION IF NON OF THE NUMBERS ENTERD MEET THE CONDITIONS
	
	else {cout << "NO  CONDITION WAS MET!";}
	



	return 0;

}


#include <iostream>

using namespace std;


int main() {

    double number1, number2, number3 = 0.0; {number3; };

    for (int x = 0; x < 1; x++) {

        cout << "ENTER THE FIRST NUMBER :" << endl << endl;

        cin >> number1;

        if (number1 >= 10 && number1 <= 20) {

            cout << ":" << number1 << " IS BETWEEN 10 AND 20 !" << endl << endl;

        }
        else { cout << ": " << number1 << " IS NOT EQUAL OR BETWEEN 10 AND 20 !" << endl << endl; }

        for (int y = 0; y < 1; y++) {

            cout << ": ENTER THE SECOND NUMBER :" << endl << endl;

            cin >> number2;

            if (number2 >= 20 && number2 <= 30) {

                double sum = number1 + number2 + number3;

                cout << ": THE SUM = " << sum << endl << endl;

            }
            else { cout << ": " << number2 << " IS NOT EQUAL OR BETWEEN 20 AND 30 !" << endl << endl; }

            for (int z = 0; z < 1; z++) {

                cout << ": ENTER THE THIRD NUMBER" << endl << endl;

                cin >> number3;

                if (number3 <= 5) {

                    double results = (number1 + number2) * number3;

                    cout << ": THE SUM OF THE FIRST AND THE SECOND NUMBERS MULTIPLIED BY THE THIRD NUMBER IS "<<" = " << results << endl << endl;
                }
                else { cout << ": " << number3 << " IS NOT EQUAL OR LESS THAN 5 !" << endl << endl; }
            }
        }
    }


    return 0;

}
