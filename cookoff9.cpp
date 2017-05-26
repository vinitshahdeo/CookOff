#include<isotream>
using namespace std;
void swap(int m, int n)
{
   int x = m;
	m = n;
	n = x;
}
main()
{
   int x = 5, y = 3;
	swap(x,y);
	cout<<x<<" "<<y;
}
