#include<iostream>
using namespace std;
int findLeftSorted(int arr[])
{
int flag=0;
for(int i=1;i<10;i++)
{
if(arr[i]>arr[i-1])
flag=1;
else
{
flag=0;
break;
}
}
return flag;
}
int findRightSorted(int arr[])
{
int flag=0;
for(int i=9;i>0;i--)
{
if(arr[i]<arr[i-1])
flag=1;
else
{
flag=0;
break;
}
}
return flag;
}
int main()
{
int testcases;
cin>>testcases;
int arr[10];
int left;
int right;
cout<<"Lumberjacks:"<<endl;
for(int i=0;i<testcases;i++)
{
for(int i=0;i<10;i++)
cin>>arr[i];
left=findLeftSorted(arr);
right=findRightSorted(arr);
if(left==1 || right==1)
cout<<"Ordered"<<endl;
else
cout<<"Unordered"<<endl;
}
return 0;
}
