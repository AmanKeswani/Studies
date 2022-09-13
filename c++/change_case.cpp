#include <iostream>

using namespace std;

int main(){

    // input the required character
    
    char c;
    cout<<"Input a character to check"<<endl;
    cin>>c;

    // Check if the character is an alphabet and if yes then the case of the alphabet and converting
    
    if(c>='a'&&c<='z'){
    cout<<"The given character is a lower case character";
    c += 'a'-'A';
    }
    else if(c>='A'&&c<='Z'){
    cout<<"The given character is a upper case character";
    c += 'a'-'A';
    }
    else
    cout<<"The given character is not an alphabet";

    return 0;

}