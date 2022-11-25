#include <iostream>

using namespace std;

class worker {

    int age;
    char name[30];

    public:
        void get_w();
        void show_w();
};

void worker::get_w(){
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Enter age"<<endl;
    cin>>age;
}

void worker::show_w(){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
}

class Manager: public worker{
    int now;
    public:
    void get();
    void set();
};
void Manager::get(){
    worker::get_w();
    cout<<"Enter number of workers"<<endl;
    cin>>now;
}

void Manager::set(){
    worker::show_w();
    cout<<"No. of workers: "<<now;
}

int main(){
    Manager m;
    m.get();
    m.set();


    return 0;    
}