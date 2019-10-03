#include<iostream>
using namespace std;
void findAns(int num)
{
long long int mul,div,add,sub;
mul=num*567;
div=mul/9;
add=div+7492;
mul=add*235;
div=mul/47;
sub=div-498;
int rem;
int count=0;
while(count<2)
{
rem=sub%10;
count++;
sub=sub/10;
}
cout<<abs(rem)<<endl;
}
int main()
{
int testcases;

cin>>testcases;
int num;
for(int i=0;i<testcases;i++)
{
cin>>num;
findAns(num);
}
return 0;
}
