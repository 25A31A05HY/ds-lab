//c++ program to implement function overloading(number of arguments,type of arguments,order of arguments)
#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(int a,int b,float c)
{
    return a+b+c;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    int a=10,b=20,c=30;
    float d=10.5,e=20.5;
    cout<<"number of arguments:"<<add(a,b)<<endl;
    cout<<"type of arguments:"<<add(a,b,d)<<endl;
    cout<<"order of arguments:"<<add(a,b,c)<<endl;
}
