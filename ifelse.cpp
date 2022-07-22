#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int savings;
    cout<<"Input you savings \n";
    cin>>savings;

    if (savings > 10000)
    {
        if (savings>20000)
        {
            cout<<"Trip to Goa With Ish\n";
        }
        else
        {
            cout<<"Trip to Mahableshwar with Ish \n";
        }
        
        
    }
    else if (savings > 5000 )
    {
        cout<<"Dinner with Ish at Rangoli Pearl  \n";
    }
     else
     {
         cout<<"Date with Ish at Cafe Cream \n";
     }
     
    
    return 0;
}
