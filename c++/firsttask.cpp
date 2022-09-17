#include <iostream>
using namespace std;

void menu()
{
    cout << "1 : Addition"  << "\n";
    cout << "2 : Subtraction" << "\n";
    cout << "3 : Multiplication" << "\n";
    cout << "4 : Division" << "\n";
    cout << "5 : Exit" << "\n";
}

int main()
{
    int num;
    int num1;
    int num2;
    cout << "Enter first number :";
    cin >> num1;
    cout << "Enter second number :";
    cin >> num2;

    menu();

    cout << "Enter your operation :";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Addition of two numbers is : " << num1 + num2;
        break;

    case 2:
        cout << "Subtraction of two numbers is :" << num1 - num2;
        break;

    case 3:
        cout << "Multiplication of two numbers : " << num1 * num2;
        break;

    case 4:
        cout << "Division of two numbers is :" << num1 / num2;
        break;

    default:
        cout << "Invalid option.";
        break;
    }
    return 0;
}