#include <iostream>
using namespace std;
int main()
{
    int num;
    int fact = 1;
    cout << ("Enter a number whose factorial is to be found : ");
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << fact;
}