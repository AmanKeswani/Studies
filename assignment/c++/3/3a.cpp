#include <iostream>
using namespace std;

void swap(int num1,int num2)
{
        int num3;
        num3=num1;
        num1=num2;
        num2=num3;
        cout<<"\n Inside Function After Swapping the Value : \n"<<" "<<num1<<"\t"<<num2;
}
int main(){
        int num1,num2;
        cout<<"\n Enter First Number : ";
        cin>>num1;
        cout<<"\n Enter Second Number : ";
        cin>>num2;
        cout<<"\n Before Swapping the Value : \n"<<" "<<num1<<"\t"<<num2<<"\n";
        swap(num1,num2);
        cout<<"\n Outside Function After Swapping the Value : \n"<<" "<<num1<<"\t"<<num2<<"\n";
}