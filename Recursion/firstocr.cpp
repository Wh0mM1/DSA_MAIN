#include <iostream>
using namespace std;

int firstocr(int arr[],int n,int i,int target)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==target)
    {
        return i;
    }
    return firstocr(arr,n,i+1,target);
}

int main()
{
    int arr[]={1,2,4,6,2,1,2};
    cout<<firstocr(arr,7,0,6)<<endl;
    return 0;
}