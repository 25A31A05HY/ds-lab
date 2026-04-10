//c++ program to count the number of occurances in a linear search program
#inclue<iostream>
using namespace std:
int main()
{
  int a[10],n,i,key,count=0;
cout<<"enter n and key values:";
cin>>n>>key;
for(i=0;i<n;i++)
{
cout<<"enter array element"<<i+1<<":";
cin>>a[i];
}
for(i=0;i<n;i++)
{
  if(a[i]==key)
{
  count++;
}
}
if(count>0)
{
  cout<<"number of occurances is"<< count<<" times";
}
else
{
  cout<<"key element not found";
}
}
