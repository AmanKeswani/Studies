#include <iostream>

using namespace std;

int main(){

    cout<<"Enter 2 numbers."<<endl;

    int a, b, choice, ans;

    cin>>a;
    cin>>b;

    cout<<"Choose Operation."<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"5. Exit"<<endl;

    cin>>choice;

    switch (choice){

        case 1:
        cout<<a+b;
        break;

        case 2:
        cout<<a-b;
        break;

        case 3:
        cout<<a*b;
        break;

        case 4:
        cout<<a/b;

        default:
        cout<<"No such option.";
        break;
    }

    return 0;
}