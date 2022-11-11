#include <iostream>
#include <string.h>
 
using namespace std;
 
class CompareString {
 
public:
	
    char str[25];
 
    CompareString(char str1[])
    {
       
        strcpy(this->str, str1);
    }

    int operator==(CompareString s2)
    {
        if (strcmp(str, s2.str) == 0)
            return 1;
        else
            return 0;
    }
 
  
};
 
void compare(CompareString s1, CompareString s2)
{
 
    if (s1 == s2)
        cout << s1.str << " is equal to "
             << s2.str << endl;
    else {
        cout << s1.str << " is not equal to "
             << s2.str << endl;
        
    }
}
 
void testcase1()
{
    char str1[] = "Hi";
    char str2[] = "Hi";

    CompareString s1(str1);
    CompareString s2(str2);
 
    cout << "Comparing \"" << s1.str << "\" and \""
         << s2.str << "\"" << endl;
 
    compare(s1, s2);
}
 
void testcase2()
{
    char str1[] = "Hello";
    char str2[] = "Hi";

    CompareString s1(str1);
    CompareString s2(str2);
 
    cout << "\n\nComparing \"" << s1.str << "\" and \""
         << s2.str << "\"" << endl;
 
    compare(s1, s2);
}

int main()
{
    testcase1();
    testcase2();
 
    return 0;
}