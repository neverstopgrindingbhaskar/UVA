#include<iostream>
#include<string>
using namespace std;
void findAns(string str,int p,int q)
{
int flag=0;
char a;
if(p<q)
{
a=str[p];
for(int i=p+1;i<=q;i++)
{
if(str[i]==a)
flag=1;
else
{
flag=0;
break;
}
}
}
else
{
a=str[q];
for(int i=q;i<=p;i++)
{
if(str[i]==a)
flag=1;
else
{
flag=0;
break;
}
}
}
if(flag==0)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
}
int main()
{
string str,aux;
int n;
int p,q;
int count=0;
cin>>str;
aux=str;
while(!cin.eof())
{
if(aux.empty())
{
cout<<endl;
break;
}
str=aux;
cin>>n;
count++;
cout<<"Case "<<count<<":"<<endl;
for(int i=0;i<n;i++)
{
cin>>p>>q;
if(p==q)
cout<<"Yes"<<endl;
else
findAns(str,p,q);
}
cin>>aux;
}
return 0;
}


