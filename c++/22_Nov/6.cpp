#include <iostream>
#include <cstring>
using namespace std;

class Inventory {

    string desc;
    int balance;

    public:
    Inventory(int b, string desc){
        desc = desc;
        if(b<20){
            int c=0;
            while(c<20){
                cout<<"Stock less than 20. Re-enter."<<endl;
                cin>>c;
                b=c;
            }
        }
        balance = b;
    }

    void purchase(){
        cout<<"Enter purchase amount."<<endl;
        int amount;
        cin>>amount;

        balance = amount + balance;
    }

    void sale(){
        cout<<"Enter sale amount."<<endl;
        int amount;
        cin>>amount;

        if((balance - amount)<20){
            while((balance - amount)<20){
                cout<<"Couldn't sell that amount. Rr-enter"<<endl;
                cin>>amount;
            }
        }
    }

    void getStock(){
        cout<<"Stock available: "<<balance<<endl;
    }
};

int main(){

    Inventory a(25, "whatever desc");
    Inventory b(5, "error desc");

    cout<<"Stock for inventory A: "<<endl;
    a.getStock();
    cout<<"Stock for inventory B: "<<endl;
    b.getStock();


    a.purchase();
    b.purchase();

    a.sale();
    b.sale();

    cout<<"Stock for inventory A: "<<endl;
    a.getStock();
    cout<<"Stock for inventory B: "<<endl;
    b.getStock();
    

    return 0;
}