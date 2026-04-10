//c++ program to read and display one dimensional array elements using dynamic memory allocation
#include<iostream>
using namespace std;
int main()
{
  int a[10],n,i;
cout<<"enter n value:";
cin>>n;
int *p=new int[n];
for(i=o;i<n;i++)
cin>>*(p+i);
for(i=0;i<n;i++)
cout<<*(p+i);
delete[] p;
}
