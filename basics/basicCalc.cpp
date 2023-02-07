# include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
 
inputOp:
    cout << "Enter operator: +, -, *, / or mod (%): ";
    cin >> op;

    switch(op) {
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

        case '%':
        cout << num1 << " % " << num2 << " = " << num1 % num2;
        break;

        default:
        cout << "Invalid operator.\n";
        goto inputOp;
        break;
  }

  return 0;
}
