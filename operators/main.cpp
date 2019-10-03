#include<iostream>
using namespace std;
int main()
{
int testcases;
cin>>testcases;
int a,b;
for(int i=0;i<testcases;i++)
{
cin>>a>>b;
if(a<b)
cout<<"<"<<endl;
else if(a>b)
cout<<">"<<endl;
else
cout<<"="<<endl;
}
return 0;
}
