#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,result=0;
    while(n>0)
    {
        if(n&1==1)
        {
            result=result | 1<<a;
        }
        a++;
        n>>1;
    }
}