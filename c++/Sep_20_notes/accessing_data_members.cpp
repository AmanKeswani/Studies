#include <iostream>

using namespace std;

class class_name{
    public:
    int a;
    int function_name(){
        return a;
    }    
};

int main(){
    class_name object;                            // Creating class object

    object.a = 5;                                 // Accessing data member by (.) operator and class object and giving it a value.
    
    cout<<object.function_name()<<endl;           // Accessing member function and getting the value assigned earlier.
}