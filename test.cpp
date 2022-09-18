#include <iostream>
using namespace std;

int fastpower(int a,int b)
{
    int res=1;
    while(b>0)
    {
        if((b&1)!=0)
        {
            res=res*a;
        }
        a=a*a;
        b=b>>1; //b=b/2
    }
    return res;
}

int main()
{
    cout<<fastpower(3,5)<<endl;
    return 0;
}