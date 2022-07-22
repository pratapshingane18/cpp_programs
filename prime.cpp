#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i=2; i < n; i++)
    {
        if (n %i ==0)
        {
            cout<<"Non-Prime"<<endl;
            break;
        }
        else
        {
            cout<<"Prime" <<endl;
            break;
        }
    }
    return 0;
}
