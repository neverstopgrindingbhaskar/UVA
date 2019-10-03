#include<iostream>
using namespace std;
void insert(int arr[],int n)
{
for(int i=0;i<n;i++)
cin>>arr[i];
}
void findAns(int arr[],int n,int m)
{
int high=0;
int low=0;
for(int i=0;i<n;i++)
{
if((i+1)==n);
else if(arr[i]<arr[i+1])
high++;
else if(arr[i]>arr[i+1])
low++;
}
cout<<"Case "<<m+1<<": "<<high<<" "<<low<<endl; 
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
findAns(arr,n,i);
}
return 0;
}
