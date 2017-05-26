#include<iostream>
using namespace std;
void f()
 {
   static int i;
   ++i;
   cout<<i<<" ";
}
main()
{
   f();
   f();
   f();
}
