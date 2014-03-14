//============================================================================
// Name        : Exception.cpp
// Author      : doremi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double Operand1, Operand2, Result;
	char Operator;

	cout << "Please input two number and one operator" << endl;
	cin >> Operand1 >> Operator >> Operand2;

	try {

			switch(Operator) {
			case '+':
				Result = Operand1 + Operand2;
				break;
			case '-':
				Result = Operand1 - Operand2;
				break;
			case '*':
				Result = Operand1 * Operand2;
				break;
			case '/':
				if(Operand2 == 0)
					throw 0;
				Result = Operand1 / Operand2;
				break;
			default:
				throw Operator;
				break;
			}

			cout << Operand1 << Operator << Operand2 << " = " << Result << endl;

	}
	catch(const char n) {
		cout << "Operation Error: " << n << " is not validate" << endl;
	}
	catch(const int p) {
		cout << "Operation Error: Devided by " << p << " is not Allowed" << endl;
	}

	cout << "Done" << endl;

//	cout << "!!!Hello Doremi!!!" << endl; // prints !!!Hello Doremi!!!
	return 0;
}
