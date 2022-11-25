#include <iostream>
using namespace std;

class vehicle{
    
    public:
    vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};

class four_wheeler{

    public:
    four_wheeler(){
        cout<<"This is a four wheeler"<<endl;
    }
};

class car: public vehicle, public four_wheeler{
    public:
    void show(){
        cout<<"This is a car"<<endl;
    }
};

int main(){

    car a;
    a.show();

    return 0;
}