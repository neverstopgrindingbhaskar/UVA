#include<iostream>
using namespace std;
int findAns(int arr[],int n)
{
int zerocount=0;
int count=0;
for(int i=0;i<n;i++)
{
if(arr[i]==0)
zerocount++;
else
count++;
}
return count-zerocount;
}
int main()
{
int n;
int count=0;
while(cin>>n)
{
if(n==0)
break;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=findAns(arr,n);
count++;
cout<<"Case "<<count<<": "<<ans<<endl;
}
return 0;
}
