#include<iostream>
#include<string>
using namespace std;
int minimum(int a,int b)
{
if(a<b)
return a;
else
return b;
}
void findAns(string str)
{
int min=32999;
int lastd=-1;
int lastr=-1;
for(int i=0;i<str.size();i++)
{
if(str[i]=='Z')
{
min=0;
break;
}
else if(str[i]=='R')
{
if(lastd==-1)
min=32999;
else
min=minimum(min,i-lastd);
lastr=i;
}
else if(str[i]=='D')
{
if(lastr==-1)
min=32999;
else
min=minimum(min,i-lastr);
lastd=i;
}
}
cout<<min<<endl;
}
int main()
{
string str;
int n;
while(cin>>n)
{
if(n==0)
break;
cin>>str;
findAns(str);
}
cout<<endl;
return 0;
}
