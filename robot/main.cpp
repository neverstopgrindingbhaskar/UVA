#include<iostream>
#include<string>
using namespace std;
void findAns(int q)
{
int start=0;
string str,as;
int num;
int arr[q];
for(int i=0;i<q;i++)
arr[i]=0;
for(int i=0;i<q;i++)
{
cin>>str;
if(str=="LEFT")
{
arr[i]=arr[i]-1;
start=start-1;
}
else if(str=="RIGHT")
{
arr[i]=arr[i]+1;
start=start+1;
}
else
{
cin>>as>>num;
int ans=arr[num-1];
if(ans<0)
{
arr[i]=arr[i]-1;
start=start-1;
}
else
{
arr[i]=arr[i]+1;
start=start+1;
}
}
}
cout<<start<<endl;
}
int main()
{
int start=0;
int testcases;
int q;
cin>>testcases;
for(int i=0;i<testcases;i++)
{
cin>>q;
findAns(q);
}

return 0;
}
