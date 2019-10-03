#include<iostream>
using namespace std;
int main()
{
int testcases;
cin>>testcases;
int a,b,c;
for(int i=0;i<testcases;i++)
{
cin>>a>>b>>c;
if(a<=20 && b<=20 && c<=20)
cout<<"Case "<<i+1<<": good"<<endl;
else
cout<<"Case "<<i+1<<": bad"<<endl;
}

return 0;
}
