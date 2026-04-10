//c++ program to read two numbers and perform swaping
#include<iostream>
using namespace std;
int main()
{
  int a,b;
cout<<"enter a and b values:";
cin>>a>>b;
cou<<"value of a is:"<<a<<endl<<"value of b is:"<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cou<<"value of a is:"<<a<<endl<<"value of b is:"<<b<<endl;
}
