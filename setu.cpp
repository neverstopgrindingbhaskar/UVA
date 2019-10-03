#include<iostream>
#include<string>
using namespace std;
int main()
{
int testcases;
cin>>testcases;
string str;
int num;
int sum=0;
for(int i=0;i<testcases;i++)
{
cin>>str;
if(str=="donate")
{
cin>>num;
sum+=num;
}
else if(str=="report")
cout<<sum<<endl;
}
return 0;
}
