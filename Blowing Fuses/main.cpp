#include<iostream>
using namespace std;
void initial(int arr[])
{
for(int i=1;i<=20;i++)
arr[i]=0;
}
void print(int flag,int max)
{
if(flag==1)
{
cout<<"Fuse was blown."<<endl;
}
else
{
cout<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<max<<" amperes."<<endl;
}
cout<<endl;
}
int main()
{
int n,m,a,count=0;
int num;
int arr[20];
int sum=0,max=0;
int flag=0;
while(cin>>n>>m>>a)
{
if(n==0)
break;
initial(arr);
count++;
sum=0;
cout<<"Sequence "<<count<<endl;
max=0;
flag=0;
int barr[n];
for(int i=1;i<=n;i++)
cin>>barr[i];
for(int j=0;j<m;j++)
{
cin>>num;
if(arr[num]==0)
{
arr[num]=1;
sum+=barr[num];
}
else
{
arr[num]=0;
sum-=barr[num];
}
if(sum>max)
max=sum;
if(sum>a)
flag=1;
}
print(flag,max);
}
cout<<endl;
return 0;
}
