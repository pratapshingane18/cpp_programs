#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum=0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    cout<<"the sum of first"<<n<<"Natural numbers is :\n" <<sum;

    return 0;
}
