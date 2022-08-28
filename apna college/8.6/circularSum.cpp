#include <iostream>
#include <climits>
using namespace std;


int kadane(int arr[],int n)
{
    int currsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxSum=max(maxSum,currsum);
    }
    return maxSum; 
}

int main(){
    int n;
    cin>>n;
    int totalSum=0,arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    for(int i=0;i<n;i++)
    {
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalSum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
}