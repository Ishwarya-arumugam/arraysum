#include<stdio.h>
#include<conio.h>
void main()
{
int a[700],b[900],c[600],i,n,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("%d",c[i]);
}
getch();
}
