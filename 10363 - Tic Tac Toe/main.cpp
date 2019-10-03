#include<iostream>
#include<string>
using namespace std;
char str[3][3];
void findAns()
{
int xcount=0;
int ycount=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(str[i][j]=='X')
xcount++;
else if(str[i][j]=='O')
ycount++;
}
}
if(abs(xcount-ycount)>1 || ycount>xcount || (ycount==1 && xcount==0))
cout<<"no"<<endl;
else
{

}
}
int main()
{
int testcases;
cin>>testcases;
for(int i=0;i<testcases;i++)
{
for(int j=0;j<3;j++)
{
for(int k=0;k<3;k++)
{
cin>>str[j][k];
}
}
findAns();
}
return 0;
}
