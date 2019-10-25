#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;

while(cin>>n && n!=-1)
{
string str,str1,real,real1;
cout<<"Round "<<n<<endl;
int hash[26]={0};
int hash2[26]={0};
cin>>str>>str1;
for(int i=0;i<str.size();i++)
{
if(hash[str[i]-97]==0)
{
real.push_back(str[i]);
hash[str[i]-97]++;
}
}
int flag=0;
int goodCount=0;
int badCount=0;
for(int i=0;i<str1.size();i++)
{
if(hash[str1[i]-97]==0 && hash2[str1[i]-97]==0)
{
badCount++;
hash2[str1[i]-97]++;
}
else if(hash[str1[i]-97]>0 && hash2[str1[i]-97]==0)
{
goodCount++;
hash2[str1[i]-97]++;
}
if(badCount>=7)
{
flag=1;
cout<<"You lose."<<endl;
break;
}
if(goodCount==real.size())
{
flag=1;
cout<<"You win."<<endl;
break;
}
}
if(flag==0)
cout<<"You chickened out."<<endl;
}
return 0;
}
