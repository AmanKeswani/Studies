// write a program to read an array and find the largest of them

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter number of elements of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
    return 0;

}