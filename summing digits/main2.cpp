#include<iostream>
using namespace std;
int findAns(int n)
{
int sum=0,sum1=0;
if(n<=0)
return 0;
else
{
sum+=n%10+findAns(n/10);
if(sum>10)
sum1+=sum%10+findAns(sum/10);
}
return sum1;
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
if(n<10)
cout<<n<<endl;
else
{
int ans=findAns(n);
cout<<ans<<endl;
}
}
}
return 0;
}
