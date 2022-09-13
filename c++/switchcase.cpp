#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number :";
    cin >> num;
    switch (num)
    {
    case 0:
        cout << "Zero.";
        break;
    case 1:
        cout << "One.";
        break;
    case 2:
        cout << "Two.";
        break;
    case 3:
        cout << "Three.";
        break;
    default:
        cout << "Bigger than Three.";
        break;
    }
}