#include <iostream>

using namespace std;

int main(){

    // input the required character
    
    char c;
    cout<<"Input a character to change cae"<<endl;
    cin>>c;

    // Check if the character is an alphabet and giving value
    
    if(c>='a'&&c<='z'){
    cout <<"The given character is a lower case character";
    cout << "the position value is " << (c - 96);
    }
    else if(c>='A'&&c<='Z'){
    cout<<"The given character is a upper case character";
    cout << "the position value is " << (c - 64);
    }
    else
    cout<<"The given character is not an alphabet";

    return 0;

}