#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    for(int i =1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s=s+(i^2)/(i^3);
        }
    }
    cout<<s;
}
