#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i,i1,i2,i3,i4,i5;
    cin>>n;
    for(i =0 ; i <n; i++)
    {
        cin>>i1>>i2>>i3>>i4>>i5;
        
    
    if(i1+i2+i3+i4+i5 == 0)
        {
            cout<<"Begineer"<<endl;
            
        }
        
        else if (i1+i2+i3+i4+i5+0 == 1)
        {
            cout<<"Junior Developer"<<endl;
        }
        else if (i1+i2+i3+i4+i5 +0 == 2)
        {
            cout<<"Middle Developer"<<endl;
        }
        else if (i1+i2+i3+i4+i5+0 == 3)
        {
            cout<<"Senior Developer"<<endl;
        }
        else if (i1+i2+i3+i4+i5 ==4)
        {
            cout<<"Hacker"<<endl;
        }
        else 
        {
            cout<<"Jeff Dean"<<endl;
        }
    continue;
    }
    return 0;
}
