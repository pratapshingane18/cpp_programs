#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a;
    a = 12;
    cout<<"size of given integer " << sizeof(a)<<endl;

    float b;
    b = 23.456456758;
    cout<<"size of given float " << sizeof(b)<<endl;

    char c;
    
    cout<<"size of given character " << sizeof(c)<<endl;

    bool d;
    cout<<"size of given boolean " << sizeof(d)<<endl;
     short int si;
     long int li;

         cout<<"size of given  short integer" << sizeof(si)<<endl;
         cout<<"size of given long integer" << sizeof(li)<<endl;





    return 0;
}
