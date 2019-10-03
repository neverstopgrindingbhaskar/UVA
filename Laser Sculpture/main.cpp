#include<iostream>
using namespace std;
int main()
{
int n,m;
int num;
int count;
int max=0;
while(cin>>n && n!=0)
{
count=1;
max=0;
cin>>m;
for(int i=0;i<m;i++)
{
cin>>num;
if(num>=max)
{
max=num;
count++;
}
}
cout<<count<<endl;
}
return 0;
}
