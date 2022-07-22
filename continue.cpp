#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int pocketmoney= 3000;
    for (int i = 0; i < 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (pocketmoney ==0)
        {
            break;
        }
        cout<<"go out today" <<endl;
        pocketmoney = pocketmoney - 300;
        
    }
    
    return 0;
}
