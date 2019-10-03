#include<iostream>
using namespace std;
void insert(int arr[],int n)
{
for(int i=0;i<n;i++)
cin>>arr[i];
}
int findAns(int arr[],int n)
{
int max=0;
for(int i=0;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
return max;
}
int main()
{
int testcases;
cin>>testcases;
int n;
for(int i=0;i<testcases;i++)
{
cin>>n;
int arr[n];
insert(arr,n);
int num=findAns(arr,n);
cout<<"Case "<<i+1<<": "<<num<<endl;
}
return 0;
}
