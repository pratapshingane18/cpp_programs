#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Input number to cheak\n";
    cin>>num;

    if (num % 2 == 0)
    {
        cout<<"Given Number is Even\n";
        
    }
    else
    {
        cout<<"Given Number is Odd\n";
    }
    
    
    return 0;
}
