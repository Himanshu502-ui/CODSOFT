#include <iostream>
using namespace std;

int main() {
    double a, b;
    char opera;

    cout<< "Welcome to simple calculator "<<endl <<endl;

   cout <<"Enter the first number = ";
    cin >> a;

     cout <<"Enter the second numbr = ";
    cin >> b;


     cout << "Enter the operator (+, -, *, /) = ";
    cin >>opera;

   
    switch (opera) {
        case '+':
            cout << "Addition: " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction: " << a - b << endl;
            break;
     case '*':
            cout << "Multiplication: " << a * b << endl;
     break;
        case '/':
            if (b != 0)
                cout << " Division: " << a / b << endl;
            else
                cout << "Error! Division by zero is not alowed" << endl;
            break;
        default:
            cout << "you entered the wrong operator! Please use +, -, *, or /" << endl;
    }

    return 0;
}
