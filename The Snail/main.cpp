#include<iostream>
using namespace std;
void findAns(double h,double u,double d,double f)
{
int count=1;
int flag=0;
double div=f/100;
double initial=0.00,distanceclimbed=0.0,heightafter=0.0,heightafters=0.0;
float subber=div*u;
distanceclimbed+=u;
heightafter+=u;
heightafters+=u-d;
cout<<initial<<" "<<distanceclimbed<<" "<<heightafter<<" "<<heightafters<<endl;
if(heightafter>=h)
{
flag=1;
count=1;
}
else if(heightafter<0 || heightafters<0)
{
flag=0;
count=2;
}
else
{
while(heightafter<h && heightafter>=0)
{
initial=heightafters;
u=u-subber;
if(u>0)
{
distanceclimbed=u;
heightafter=initial+distanceclimbed;
heightafters=heightafter-d;
count++;
//cout<<initial<<" "<<distanceclimbed<<" "<<heightafter<<" "<<heightafters<<endl;
if(heightafter>=h || heightafters>=h)
{
flag=1;
break;
}
else if(heightafter<0 && heightafters<0)
{
flag=0;
break;
}
}
}
}
if(flag==1)
cout<<"success on day "<<count<<endl;
else
cout<<"failure on day "<<count<<endl;
}
int main()
{
double h,u,d,f;
while(cin>>h)
{
if(h==0)
break;
cin>>u>>d>>f;
findAns(h,u,d,f);
}
return 0;
}
