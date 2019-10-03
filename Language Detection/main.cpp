#include<iostream>
#include<string>
using namespace std;
int main()
{
int count=0;
string breaker="#";
string str;
string english="HELLO";
string spanish="HOLA";
string german="HALLO";
string french="BONJOUR";
string itilian="CIAO";
string russian="ZDRAVSTVUJTE";
while(cin>>str)
{
if(!str.compare(breaker))
break;
else if(!str.compare(english))
{
count++;
cout<<"Case "<<count<<": "<<"ENGLISH"<<endl;
}
else if(!str.compare(spanish))
{
count++;
cout<<"Case "<<count<<": "<<"SPANISH"<<endl;
}
else if(!str.compare(german))
{
count++;
cout<<"Case "<<count<<": "<<"GERMAN"<<endl;
}
else if(!str.compare(french))
{
count++;
cout<<"Case "<<count<<": "<<"FRENCH"<<endl;
}
else if(!str.compare(itilian))
{
count++;
cout<<"Case "<<count<<": "<<"ITALIAN"<<endl;
}
else if(!str.compare(russian))
{
count++;
cout<<"Case "<<count<<": "<<"RUSSIAN"<<endl;
}
else
{
count++;
cout<<"Case "<<count<<": "<<"UNKNOWN"<<endl;
}
}

return 0;
}
