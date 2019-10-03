#include<iostream>
#include<string>
#include<stack>
using namespace std;
void findAns(string str)
{
stack<char>s;
for(int i=0;i<str.size();i++)
{
if(isspace(str[i]))
{
while(!s.empty())
{
cout<<s.top();
s.pop();
}
cout<<" ";
}
else
s.push(str[i]);
}
while(!s.empty())
{
cout<<s.top();
s.pop();
}
cout<<endl;
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
findAns(str);
}
return 0;
}
