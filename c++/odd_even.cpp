#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number to check even or odd";
    cin>>num;


    if(num%2==0){
        cout<<"This is an even number";
    }    
    else {
        cout<<"This is an odd number.";
    }
    return 0;
}