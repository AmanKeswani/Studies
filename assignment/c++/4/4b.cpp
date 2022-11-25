#include <iostream>

using namespace std;

class Student{
    private:
    int roll;
    string name;
    int marks1;
    int marks2;
    int marks3;

    // void getData(){


    // }

    public: void setData(){
        cout<<"Enter student name"<<endl;
        cin>>name;
        cout<<"Enter roll number"<<endl;
        cin>>roll;

        cout<<"Enter 3 marks"<<endl;
        cin>>marks1>>marks2>>marks3;
    }

   
        public: void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"roll number: "<<roll<<endl;
        cout<<"marks1: "<<marks1<<endl;
        cout<<"marks2: "<<marks2<<endl;
        cout<<"marks3: "<<marks3<<endl;
    }

};

int main(){

    Student objects[2];

    for(int i=0;i<2;i++){

        objects[i].setData();
    }

    for(int i=0;i<2;i++){

        objects[i].display();
    }

}