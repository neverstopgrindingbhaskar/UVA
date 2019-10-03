#include<iostream>
#include<string>
#include <cctype>
#include<cstring>
using namespace std;
void findAns(string str)
{
if(str.size()==1)
{
if(str[0]=='1'|| str[0]=='4')
cout<<"+"<<endl;
} 
else if(strcmp(str,"78"))
cout<<"+"<<endl;
else if(str[str.size()-1]=='5' && str[str.size()-2]=='3')
cout<<"-"<<endl;
else if(str[0]=='9' && str[str.size()-1]=='4')
cout<<"*"<<endl;
else
cout<<"?"<<endl;
}
int main()
{
string str;
int testcases;
cin>>testcases;
for(int i=0;i<testcases;i++)
{
cin>>str;
findAns(str);
}
return 0;
}
