#include<iostream>
#include<string>
using namespace std;
int main()
{
int n;
cin>>n;
string one="one";
string two="two";
string three="three";
string str;
for(int i=0;i<n;i++)
{
cin>>str;
int res1,res2,res3;
res1=0,res2=0,res3=0;
int k=0;
for(int j=0;j<str.size() && k<one.size();j++)
{
if(str[j]==one[k])
res1++;
k++;
}
k=0;
for(int j=0;j<str.size() && k<two.size();j++)
{
if(str[j]==two[k])
res2++;
k++;
}
k=0;
for(int j=0;j<str.size() && k<three.size();j++)
{
if(str[j]==three[k])
res3++;
k++;
}
if(res1>res2 && res1>res3)
cout<<1<<endl;
else if(res2>res1 && res2>res3)
cout<<2<<endl;
else
cout<<3<<endl;
}
return 0;
}
