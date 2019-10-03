#include<iostream>
using namespace std;
int main()
{
int sub,sub1;
int a,b;
while(cin>>a>>b)
{
if(a==-1 && b==-1)
break;
else if(a<b)
{
sub=b-a;
sub1=(99-b)+a+1;
if(sub<sub1)
cout<<sub<<endl;
else
cout<<sub1<<endl;
}
else
{
sub=a-b;
sub1=(99-a)+b+1;
if(sub<sub1)
cout<<sub<<endl;
else
cout<<sub1<<endl;
}
}
return 0;
}
