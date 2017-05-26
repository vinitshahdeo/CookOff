#include<iostream>
using namespace std;
int fact(int v)
{   inr f=1;
    for(int i=1;i<=v;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        s=s+i/fact(i);
    }
    cout<<s;
}
