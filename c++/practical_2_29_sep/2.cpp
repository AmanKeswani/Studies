// write a program to exchange contents of two variables using call by value

#include <iostream>
using namespace std;

void swapNums(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int firstNum;
    int secondNum;

    cout << "Enter the first number: ";
    cin >> firstNum;

    cout << "Enter the second number: ";
    cin >> secondNum;

    cout << "Before Swap :"
         << "\n";
    cout << firstNum << secondNum << "\n";

    // Calling the function
    swapNums(firstNum, secondNum);

    cout << "After Swap :"
         << "\n";
    cout << firstNum << secondNum;

    return 0;
}
