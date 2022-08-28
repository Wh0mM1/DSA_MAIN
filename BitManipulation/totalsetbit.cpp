//Count total set bits
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int x=i;
        while(x>0)
        {
            x=(x&(x-1));
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}