#include <iostream>
using namespace std;

class ABC{
    public:
    void product(int a, int b) {
        int p = a * b;
        cout<<p<<endl;
    }

    void product(double a, double b) {
        double p = a * b;
        cout<<p<<endl;
    }
};

int main(){

    ABC a;
    a.product(1, 2); 
    a.product(1.5, 2.5);

    return 0;
}