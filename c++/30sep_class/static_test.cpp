#include <iostream>
using namespace std;

class Item{
    static int count;
    int number;

    public:
    void getData(int a){
        number = a;
        count++;
    }

    void getCount(){
        cout << "Count : " << count << endl;
    }
};

int Item::count;

int main(){
    Item a, b, c;

    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(10);
    b.getData(20);
    c.getData(30);

    cout<<"After Reading data"<<endl;
    
    a.getCount();
    b.getCount();
    c.getCount();

    return 0;
}