#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,a,n,sum=0,s;
    cout<<"enter any n0 = ";
    cin>>n;
    s=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+pow(a,3);
        n=n/10;
    }
    if(sum==s)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }
    return 0;
}
