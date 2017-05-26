#include<iostream>
using namespace std;
int main()
{
    int n, s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s=s+1/i;
    }
    cout<<s;
}
