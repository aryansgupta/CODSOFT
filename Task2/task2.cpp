#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string symbol;
    double num1, num2;

    cout << "Enter first Number: " << endl;
    cin >> num1;

    cout << "Enter symbol (+, -, *, /) " << endl;
    cin >> symbol;

    cout << "Enter Second Number: " << endl;
    cin >> num2;

    if(symbol == "+"){
        cout << "The answer is: " << num1 + num2 << endl;
    } else{
        if(symbol == "-"){
            cout << "The answer is: " << num1 - num2 << endl;
        } else{
            if (symbol == "*") {
                cout << "The answer is: " << num1 * num2 << endl;
            } else{
                if(symbol == "/"){
                cout << "The answer is: " << num1 / num2 << endl;
                }
                else{
                    cout << "Invalid!" << endl;
                }
            }
        }
    }
    return 0;
}
