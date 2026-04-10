//c++ program to implement binary search
#include<iostream>
using namespace std;
int main()
{
  int a[10],n,i,key;
cout<<"enter n and key values:";
cin>>n>>key;
for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
cout<<"enter sorted array elements:";
int low=0,high=n-1,mid;
bool x=false;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
cout<<"key element found at index"<<mid<<endl;
  x=true;
break;
}
else if(a[mid]<key)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(!x)
{
cout<<"key element not found";
}
}
