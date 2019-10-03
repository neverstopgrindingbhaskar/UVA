#include<string>
#include<iostream>
using namespace std;
int main()
{
string str;
int count=0;
while(cin>>str)
{
if(str=="*")
break;
count++;
if(str=="Hajj")
cout<<"Case "<<count<<": "<<"Hajj-e-Akbar"<<endl;
else
cout<<"Case "<<count<<": "<<"Hajj-e-Asghar"<<endl;
}
return 0;
}
