#include<iostream>
using namespace std;
int main()
{
int n,m;
while(cin>>n>>m && n!=0 && m!=0)
{
int hash1[100000];
int hash2[100000];
for(int i=0;i<=100000;i++)
{
hash1[i]=0;
hash2[i]=0;
}
int num;
int count1=0,count2=0;
for(int i=0;i<n;i++)
{
cin>>num;
hash1[num]++;
}
for(int i=0;i<m;i++)
{
cin>>num;
hash2[num]++;
}
for(int i=0;i<=100000;i++)
{
if(hash1[i]>0 && hash2[i]==0)
count1++;
else if(hash1[i]==0 && hash2[i]>0)
count2++;
}
cout<<min(count1,count2)<<endl;
}
return 0;
}
