#include<iostream>
#include<cmath>
using namespace std;
int findAns(int x,int y,int z,int sum)
{
int min1,min2,min3;
min1=abs(x-sum);
min2=abs(y-sum);
min3=abs(z-sum);
int ans;
if(min1<min2 && min1<min3)
ans=x;
else if(min2<min1 && min2<min3)
ans=y;
else if(min3<min1 && min3<min2)
ans=z;
return ans;
}
int main()
{
int testcases;
cin>>testcases;
int x,y,z;
int sum=0;
for(int i=0;i<testcases;i++)
{
cin>>x>>y>>z;
sum=(x+y+z)/3;
int ans=findAns(x,y,z,sum);
cout<<"Case "<<i+1<<": "<<ans<<endl;
}
return 0;
}
