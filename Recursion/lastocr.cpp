#include <iostream>
using namespace std;

int lastocr(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarr=lastocr(arr,n,i+1,key);
    if(restarr!=-1)
    {
        return restarr;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,4,6,2,1,2};
    cout<<lastocr(arr,7,0,2)<<endl;
    return 0;
}