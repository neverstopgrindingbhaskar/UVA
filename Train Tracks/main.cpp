#include<iostream>
#include<string>
using namespace std;
void findAns(string str)
{
int mcount=0;
int fcount=0;
for(int i=0;i<str.size();i++)
{
if(str[i]=='M')
mcount++;
else if(str[i]=='F')
fcount++;
}
if(mcount==1 && fcount==1)
cout<<"NO LOOP"<<endl;
else if(mcount==fcount)
cout<<"LOOP"<<endl;
else if(fcount>mcount)
cout<<"NO LOOP"<<endl;
else if(mcount>fcount)
cout<<"NO LOOP"<<endl;
}
int main()
{
string str;
int testcases;
scanf("%d\n",&testcases);
for(int i=0;i<testcases;i++)
{
getline(cin,str);
findAns(str);
}
return 0;
}
