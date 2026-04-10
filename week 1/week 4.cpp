//c++ program to find the factorial of given number
#include<iostream>
using namespace std;
int main()
{
 int n,fact=1;
cout<<"enter any number";
cin>>n;
for(int i=1;i<=n;++)
{
fact=fact*i;
}
cout<<"factorial of given number"<<n<<"is"<<fact;
}
