#include<iostream>
using namespace std;
main()
{
   int i = 2, j = 5;

   i^=j;
   j^=i;
   i^=j;
   cout<<i<<" "<<j;
}
