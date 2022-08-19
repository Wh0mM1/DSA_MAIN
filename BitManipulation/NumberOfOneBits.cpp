#include <iostream>
using namespace std;
int numSetBits(int A) {
    int count=0;
    while(A>0)
    {
        if(A&1==1)
        {
            count++;
        }
        A=A>>1;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<numSetBits(n)<<endl;
    return 0;
}