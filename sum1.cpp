#include<iostream>
using namespace std;
int main()
{
    int n,s,f;
    s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        f=1;
        for(int j=1;j<=i;j++)
        {
            f=f*i;
        }
        s=s+1/f;
    }
    cout<<s;
}
