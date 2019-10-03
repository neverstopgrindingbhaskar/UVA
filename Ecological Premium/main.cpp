#include<iostream>
using namespace std;
int main()
{
int testcases;
cin>>testcases;
int n;
long long unsigned int sum=0;
int a,b,c;
for(int i=0;i<testcases;i++)
{
sum=0;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a>>b>>c;
sum+=a*c;
}
cout<<sum<<endl;
}
return 0;
}
