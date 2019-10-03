#include<iostream>
using namespace std;
void insert(int arr[],int n)
{
for(int i=0;i<n;i++)
cin>>arr[i];
}
void findAns(int arr[],int n,int k)
{
int flag=0;
int num1=0,num2=0,sub;
for(int i=0;i<n;i++)
{
num1+=mile(arr[i]);
num2+=juice(arr[i]);
}
cout<<num1<<" "<<num2<<endl;
if(num1==num2)
cout<<"Case "<<k<<": Mile Juice "<<num1<<endl;
else if(num1<num2)
cout<<"Case "<<k<<": Mile "<<num1<<endl;
else
cout<<"Case "<<k<<": Juice "<<num2<<endl;
}
int main()
{
int testcases;
cin>>testcases;
int n;
for(int i=0;i<testcases;i++)
{
cin>>n;
int arr[n];
insert(arr,n);

}
return 0;
}
