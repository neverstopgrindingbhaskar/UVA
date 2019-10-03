#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double findSum(string str)
{
int ascii;
int total;
double sum=0;
for(int i=0;i<str.size();i++)
{
if(str[i]>64 && str[i]<=90)
{
total=str[i]-64;
sum+=total;
}
else if(str[i]>96 && str[i]<=122)
{
total=str[i]-96;
sum+=total;
}
}
return sum;
}
double findAns(int n)
{
double rem=0;
double sum=0;
if(n<10)
return n;
else
{
while(n>0)
{
rem=n%10;
sum+=rem;
n=n/10;
}
}
return sum;
}

int main()
{
float div;
double s1,s2;
string str1,str2,aux1,aux2;
double res,res1;
while(!cin.eof())
{
div=0;
getline(cin,aux1);
getline(cin,aux2);
if(aux1.empty() || aux2.empty())
break;
else
{
str1=aux1;
str2=aux2;
s1=findSum(str1);
s2=findSum(str2);
res=s1;
res1=s2;
while(res>=10)
res=findAns(res);
while(res1>=10)
res1=findAns(res1);
if(res<res1)
{
div=(res/res1)*100;
}
else
{
div=(res1/res)*100;
}
}
cout <<setprecision (2) <<fixed << div<<" %"<<endl;
}
return 0;
}
