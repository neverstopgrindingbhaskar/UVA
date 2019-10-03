#include<iostream>
using namespace std;
int check(int a,int b,int c,int x,int y,int z)
{
int count=0;
if(a>x)
count++;
if(b>y)
count++;
if(c>z)
count++;
return count;
}
int main()
{
int x,y,z,a,b;
while(cin>>x>>y>>z>>a>>b && x!=0 && y!=0)
{
int valid[53];
for(int i=1;i<=52;i++)
valid[i]=0;
valid[x]=1;
valid[y]=1;
valid[z]=1;
valid[a]=1;
valid[b]=1;
int p,q,r,s,t,u;
int flag=0;
for(int c=1;c<=52;c++)
{
if(valid[c]==0)
{
p=check(a,b,c,x,y,z);
q=check(a,c,b,x,y,z);
r=check(b,a,c,x,y,z);
s=check(b,c,a,x,y,z);
t=check(c,a,b,x,y,z);
u=check(c,b,a,x,y,z);
if(p>=2 && q>=2 && r>=2 && s>=2 && t>=2 && u>=2)
{
flag=1;
cout<<c<<endl;
break;
}
}
}
if(flag==0)
cout<<-1<<endl;
}
return 0;
}
