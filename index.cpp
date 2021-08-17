#include <iostream>
using namespace std;

string opr;

int main() {
cout << "What operator will you use?\nYou can choose between +, -, x and :" << endl << "->";
cin >> opr;

int num1;
int num2;

if (opr == "+") {
		cout << "Insert a number.\n<...> + ..." << endl;
		cin >> num1;
		cout << "Insert another number." << endl << num1 << " + <...>" << endl;
		cin >> num2;

		int answerAdd = num1 + num2;

		cout << "Here's your answer.\n" << num1 << " + " << num2 << " = " << answerAdd << endl;
		return 0;

	} else if (opr == "-") {
		cout << "Insert a number.\n<...> - ..." << endl;
		cin >> num1;
		cout << "Insert another number." << endl << num1 << " - <...>" << endl;
		cin >> num2;

		int answerSub = num1 - num2;

		cout << "Here's your answer.\n" << num1 << " - " << num2 << " = " << answerSub << endl;
		return 0;

	} else if (opr == "x") {
		cout << "Insert a number.\n<...> x ..." << endl;
		cin >> num1;
		cout << "Insert another number." << endl << num1 << " x <...>" << endl;
	        cin >> num2;

		int answerMul = num1 * num2;

		cout << "Here's your answer." << endl << num1 << " x " << num2 << " = " << answerMul << endl;
		return 0;	
	
	} else if (opr == ":") {
		cout << "Insert a number.\n<...> : ..." << endl;
		cin >> num1;
		cout << "Insert another number." << endl << num1 << " : <...>" << endl;
		cin >> num2;
		
		int answerDev = num1 / num2;

		cout << "Here's your answer." << endl << num1 << " : " << num2 << " = " << answerDev << endl;
		return 0;
	
	} else if (opr != "+" || "-" || "x" || ":") {
		cout << "That is not an supported operator" << endl;
	return 0;

	}
}
