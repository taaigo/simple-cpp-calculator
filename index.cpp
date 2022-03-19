#include <iostream>

using namespace std;

char opr;

int main()
{
    cout << "What operator will you use?\nYou can choose between +, -, x and :" << endl << "->";
    cin >> opr;

    float num1, num2;

    switch (opr)
    {
        case '+':
        {
            cout << "Insert a number.\n<...> + ..." << endl;
            cin >> num1;
            cout << "Insert another number." << endl << num1 << " + <...>" << endl;
            cin >> num2;

            float answerAdd = num1 + num2;

            cout << "Here's your answer.\n" << num1 << " + " << num2 << " = " << answerAdd << endl;
            break;
        }
        case '-':
        {
            cout << "Insert a number.\n<...> - ..." << endl;
            cin >> num1;
            cout << "Insert another number." << endl << num1 << " - <...>" << endl;
            cin >> num2;

            float answerSub = num1 - num2;

            cout << "Here's your answer.\n" << num1 << " - " << num2 << " = " << answerSub << endl;
            break;
        }
        case 'x':
        {
            cout << "Insert a number.\n<...> x ..." << endl;
            cin >> num1;
            cout << "Insert another number." << endl << num1 << " x <...>" << endl;
            cin >> num2;

            float answerMul = num1 * num2;

            cout << "Here's your answer." << endl << num1 << " x " << num2 << " = " << answerMul << endl;
            break;
        }
        case ':' || '/':
        {
            cout << "Insert a number.\n<...> : ..." << endl;
            cin >> num1;
            cout << "Insert another number." << endl << num1 << " : <...>" << endl;
            cin >> num2;

            float answerDev = num1 / num2;

            cout << "Here's your answer." << endl << num1 << " : " << num2 << " = " << answerDev << endl;
            break;
        }
        default:
        {
            cout << "That is not an supported operator" << endl;
        }
    }
    system("PAUSE");
}
