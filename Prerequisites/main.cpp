#include<iostream>
using namespace std;
void insert(int arr[],int n)
{
for(int i=0;i<n;i++)
cin>>arr[i];
}
int search(int arr[],int n,int key)
{
int flag=0;
for(int i=0;i<n;i++)
{
if(arr[i]==key)
{
flag=1;
break;
}
}
if(flag==1)
return 1;
else
return -1;
}
int main()
{
int n,m;
int ans;
int flag=0;
int breakerflag=0;
int p,q,num;
int count=0;
while(cin>>n)
{
if(n==0)
break;
flag=0;
breakerflag=0;
cin>>m;
int arr[n];
insert(arr,n);
for(int i=0;i<m;i++)
{
cin>>p>>q;
count=0;
for(int j=0;j<p;j++)
{
cin>>num;
ans=search(arr,n,num);
if(ans==1)
count++;
}
if(count>=q)
flag=1;
else
breakerflag=1;
}
if(breakerflag==1)
cout<<"no"<<endl;
else
cout<<"yes"<<endl;
}
return 0;
}
