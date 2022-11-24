#include <iostream>
using namespace std;

int main(){

    cout<<"Program to input array of numbers and find the largest element"<<endl;
    const int len=100;
    int arr[len];

    int largest=INT_MIN;

    for(int i=0; i<len; i++){
        cout<<"Enter "<<i<<" element."<<endl;
        cin>>arr[i];

        if(arr[i] > largest){
            largest=arr[i];
        }
    }

    cout<<"Largest of the array elements is "<<largest<<endl;
    return 0;
}