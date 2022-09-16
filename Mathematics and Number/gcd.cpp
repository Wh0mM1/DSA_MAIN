#include <iostream>
using namespace std;

// int gcd(int a,int b)
// {
//     if(a==0 || b==0)
//     {
//         return max(a,b);
//     }
//     int maxAB=max(a,b),minAB=min(a,b);
//     return gcd(maxAB-minAB,minAB);
// }



// int gcd(int a,int b)
// {
//     if(b==0)
//         return a;
//     return gcd(b,a%b);
// }

int gcd(int a,int b)
{
    return a%b==0? b : gcd(b,a%b);
}

int main()
{
    int a=24,b=60;
    cout<<gcd(a,b)<<endl;
    return 0;
}