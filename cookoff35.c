#include<stdio.h>
void main()
{
char c;
int n,i;
clrscr();
printf("insert one character and integer : ");
scanf("%c%d",&c,&n);
for(i=c+1;i<=c+n;i++)
printf("%c ",i);
getch();
}
