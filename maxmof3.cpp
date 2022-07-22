#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"Input three numbers \n";
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<"\nis Maximum in given three Inputs \n";
        }
        else
        {
            cout<<c<<"\nis Maximum in given three Inputs \n";
        }
        
        
    }
    else
    {
        if (b>c)
        {
            cout<<b<<"\nis Maximum in given three Inputs \n";
        }
        else
        {
            cout<<c<<"\nis Maximum in given three Inputs \n";
        }
        
    }
    
    

    return 0;
}
