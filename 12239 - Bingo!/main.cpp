#include<bits/stdc++.h>
using namespace std;
void findAns(vector<int>v1,int hash[],int a)
{
int num;
for(int i=0;i<v1.size();i++)
{
for(int j=i+1;j<v1.size();j++)
{
num=abs(v1[i]-v1[j]);
if(num<=a)
hash[num]++;
}
}
}
int main()
{
int a,b;
while(cin>>a>>b && a!=0 && b!=0)
{
vector<int>v1(b);
for(int i=0;i<b;i++)
cin>>v1[i];
int hash[a+1]={0};
hash[0]=1;
findAns(v1,hash,a);
int flag=0;
for(int j=0;j<=a;j++)
{
if(hash[j]>0)
flag=0;
else
{
flag=1;
break;
}
}
if(flag==0)
cout<<"Y"<<endl;
else
cout<<"N"<<endl;
}
return 0;
}
