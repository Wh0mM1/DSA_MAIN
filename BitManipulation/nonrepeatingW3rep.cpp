#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int A[32]={0};
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]&(1<<i))
            {
                A[i]++;
            }
        }
    }
    int x=0;
    for(int i=0;i<32;i++)
    {
        if(A[i]%3)
        {
            x+=(1<<i);
        }
    }
    cout<<x<<endl;
}