#include<iostream>
using namespace std;
int findSum(int n)
{
int rem;
int sum=0;
if(n<10)
return n;
while(n>0)
{
rem=n%10;
sum+=rem;
n=n/10;
}
return sum;
}
int main()
{
int n;
while(cin>>n)
{
if(n==0)
break;
else
{
int ans1=findSum(n);
while(ans1>=10)
ans1=findSum(ans1);
cout<<ans1<<endl;
}
}
return 0;
}

