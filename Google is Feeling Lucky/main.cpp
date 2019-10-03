#include<iostream>
#include<map>
#include<string>
#include <iterator> 
using namespace std;
void display(string str[],int numbers[])
{
for(int i=0;i<10;i++)
cout<<str[i]<<" "<<numbers[i]<<endl;
}
int main()
{
int testcases;
cin>>testcases;
string str[10];
int max=0,c=0;
int numbers[10];
int num;
for(int i=0;i<testcases;i++)
{
max=0;
for(int j=0;j<10;j++)
{
cin>>str[j]>>numbers[j];
if(numbers[j]>max)
max=numbers[j];
}
//display(str,numbers);
printf("Case #%u:\n", ++c);
for(int k = 0; k < 10; k++){
if(numbers[k] == max)
cout<<str[k]<<endl;
}
}
return 0;
}
