//c++ program to read and display one dimensional array elements using pointers
#include<iostream>
using namespace std;
int main()
{
  int a[10],n,i,*p;
cout<<"enter n value:";
cin>>n;
*p=a[0];
for(i=o;i<n;i++)
{
cin>>*(p+i);
}
cout<<"\narray elements are:";
for(i=0;i<n;i++)
{
cout<<*(p+i);
}
}
