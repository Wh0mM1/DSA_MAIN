#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    bool check[n+1];
    fill_n(check,n+1,true); // direct asigning all elements of array
    check[0]=false;
    check[1]=false;
    for(int i=2;i*i <=n;i++)  // till root n 
    {
        for(int j=2*i;j<=n;j+=i) 
        // for multiples like 2's multiples are 4,6,8,10,12.
        // 3's multiples are 3,6,9,12
        //likewise i will got till sqrt of n 
        {
            check[j]=false;
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" "<<check[i]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    isPrime(n);
    return 0;
}