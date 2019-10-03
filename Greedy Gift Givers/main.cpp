#include<iostream>
#include<string>
using namespace std;
int findIndex(string str[],string aux,int n)
{
int index;
for(int i=0;i<n;i++)
{
if(str[i]==aux)
{
index=i;
break;
}
}
return index;
}
void display(string str[],int arr[],int n)
{
for(int i=0;i<n;i++)
cout<<str[i]<<" "<<arr[i]<<endl;
}
void initialize(int arr[])
{
for(int i=0;i<10;i++)
arr[i]=0;
}
int main()
{
int n;
string s,aux;
int n1,n2;
int amount;
int num;
int index;
int arr[10];
string str[100];
while(!cin.eof())
{
cin>>n;
initialize(arr);
for(int i=0;i<n;i++)
cin>>str[i];
for(int i=0;i<n;i++)
{
cin>>s>>n1>>n2;
if(n2!=0)
{
amount=n1/n2;
index=findIndex(str,s,n);
num=(amount*n2);
arr[index]-=num;
for(int j=0;j<n2;j++)
{
cin>>aux;
index=findIndex(str,aux,n);
arr[index]+=amount;
}
}
}
if(!cin.eof())
{
display(str,arr,n);
initialize(arr);
}
cout<<endl;
}
return 0;
}
