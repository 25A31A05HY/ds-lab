//c++ program of swaping of two numbers using Referencing operator 
#include <iostream>
using namespace std;

int main()
{
      int a,b;
cout<<"enter a and b values:";
cin>>a>>b;
cout<<"before swaping:";
cout<<"a="<< a <<" b="<<b<<endl;
swap(a,b);
cout<<"after swaping:";
cout<<"a="<< a <<" b="<<b<<endl;
}
int swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
