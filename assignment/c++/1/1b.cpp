#include <iostream>
using namespace std;

int main(){

    cout<<"Enter 2 numbers:"<<endl;
    int a, b;
    cin>>a>>b;

    int sw;

    // cout<<"Choose operation: "<<endl;
    // cout<<"1. Add numbers: "<<endl;
    // cout<<"2. Subtract numbers: "<<endl;
    // cout<<"3. Multiply numbers: "<<endl;
    // cout<<"4. Divide numbers: "<<endl;
    // cout<<"5. Exit: "<<endl;

    bool flag = true;

    while(flag){
        
        cout<<"Choose operation: "<<endl;
        cout<<"1. Add numbers: "<<endl;
        cout<<"2. Subtract numbers: "<<endl;
        cout<<"3. Multiply numbers: "<<endl;
        cout<<"4. Divide numbers: "<<endl;
        cout<<"5. Exit: "<<endl;

        cin>>sw;

        switch (sw){
        case 1:
            cout<<a+b<<endl;
            break;

        case 2:
            cout<<a-b<<endl;
            break;

        case 3:
            cout<<a*b<<endl;
            break;

        case 4:
            cout<<a/b<<endl;
            break;

        case 5:
            flag = false;
            break;
        
        default:
            cout<<"Wrong input. Closing program."<<endl;
            flag = false;
            break;
        }
    }

    return 0;
}