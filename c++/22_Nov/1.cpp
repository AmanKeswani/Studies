#include <iostream>
#include <cmath>
using namespace std;

class Sphere{

    int radius;
    double volume;

    public:
        void getRadius(){
            cout<<"Enter radius: "<<endl;
            cin>>radius;
        }

        inline double sphereVolume(){
            return volume = (4.0/3.0)*3.14*pow(radius,3);
        }   

        void display(){
            cout<<"Volume: "<<volume<<endl;
        }

};

int main(){

    Sphere s;
    s.getRadius();
    double vol = s.sphereVolume();
    s.display();

    return 0;
}