#include <iostream>
using namespace std;

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before Swap :"
         << "\n";
    cout << firstNum<<"\n" << secondNum << "\n";

    // Calling the function
    swapNums(firstNum, secondNum);

    cout << "After Swap :"
         << "\n";
    cout << firstNum<< "\n" << secondNum;

    return 0;
}