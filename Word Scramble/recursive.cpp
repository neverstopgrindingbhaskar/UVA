#include<string>
#include<iostream>
using namespace std;
void print(string str,int start,int len)
{
if(start<len || isspace(str[start]))
{
cout<<" ";
return;
}
cout<<str[start];
print(str,start-1,len);
}
void findAns(string str,int start,int len)
{
if(start>str.size())
return;
if(start==str.size())
print(str,start-1,len);
if(!isspace(str[start]))
findAns(str,start+1,len);
else
{
print(str,start-1,len);
len=start;
findAns(str,start+1,len);
}
}
int main()
{
string str;
int start=0;
int finder=0;
while(getline(cin,str))
{
if(cin.eof())
break;
int start=0;
int len=0;
findAns(str,start,len);
cout<<endl;
}
return 0;
}
