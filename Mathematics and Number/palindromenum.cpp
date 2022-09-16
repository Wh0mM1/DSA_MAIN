#include <iostream>
using namespace std;

int main()
{
    int n,y;
    cin>>n;
    y=n;
    int res=0;
    while(n>0)
    {
        int x=n%10;
        res=res*10+x;
        n=n/10;
    }
    if(y==res)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
    return 0;
}