#include<iostream>
using namespace std;
void findAns(int n,int m)
{
int sum=0;
int div1,div2;
div1=n/3;
div2=m/3;
sum=div1*div2;
cout<<sum<<endl;
}
int main()
{
int testcases;
cin>>testcases;
int n,m;
for(int i=0;i<testcases;i++)
{
cin>>n>>m;
findAns(n,m);
}
return 0;
}
