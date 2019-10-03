#include<iostream>
using namespace std;
int findIfPossible(int num)
{
int count=0;
while(num!=1)
{
if(num%2!=0)
{
num=(3*num+1);
count++;
}
else
{
num=num/2;
count++;
}
}
return count;
}
void findAns(int n,int m)
{
int total=0;
int min=0;
int num;
if(n<=m)
{
for(int i=n;i<=m;i++)
{
num=findIfPossible(i);
if(num>min)
min=num;
}
}
else
{
for(int i=m;i<=n;i++)
{
num=findIfPossible(i);
if(num>min)
min=num;
}
}
cout<<n<<" "<<m<<" "<<min+1<<endl;
}
int main()
{
int n,m;
while(cin>>n>>m)
{
if(cin.eof())
break;
findAns(n,m);
}

return 0;
}
