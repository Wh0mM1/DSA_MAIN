#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0 || b==0)
    {
        return max(a,b);
    }
    int maxAB=max(a,b),minAB=min(a,b);
    return gcd(maxAB-minAB,minAB);
}

int main()
{
    int a=4,b=10;
    cout<<gcd(a,b)<<endl;
    return 0;
}