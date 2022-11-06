#include <iostream>
using namespace std;

class bank{
    private:
        string name;
        string AccountType;
        string TypeofAccount;
        double balance;

    public:
        void set(){
            cout<<"Enter name"<<endl;
            cin>>name;
            cout<<"Enter Account Type"<<endl;
            cin>>AccountType;
            cout<<"Enter Type of Account"<<endl;
            cin>>TypeofAccount;
            cout<<"Account Created"<<endl;
        }

        void deposit(){
            double temp;
            cout<<"Enter Money to deposit"<<endl;
            cin>>temp;

            balance = balance + temp;

            cout<<"New balance is "<<balance<<endl;
        }

        void withdraw(){
            
        }

        void display(){

        }

};

int main(){



    return 0;
}