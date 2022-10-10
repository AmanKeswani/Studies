#include <iostream>
using namespace std;

class Addition{

    public: Addition(int a, int b, int c){
        cout<<a+b+c<<endl;
    }

    public: Addition(int a, int b){
        cout<<a+b<<endl;
    }

};

int main(){

    Addition add(1, 2, 3);
    Addition add2(1, 2);
    return 0;
}