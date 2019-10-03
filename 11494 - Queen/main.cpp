#include<iostream>
using namespace std;
int main()
{
int x1,y1,x2,y2;
while(cin>>x1>>y1>>x2>>y2 && x1!=0 && x2!=0 && y1!=0 && y2!=0)
{
if(x1==x2 && y1==y2)
cout<<0<<endl;
else if(y1==y2)
cout<<1<<endl;
else if(x1==x2)
cout<<1<<endl;
else if(x1>x2 && y1>y2)//both greater
{
while(x1>0 && y1>0 && x1!=x2 && y1!=y2)
{
x1--;
y1--;
}
if(x1==x2 && y1==y2)
cout<<1<<endl;
else
cout<<2<<endl;
}
else if(x1<x2 && y1>y2)//x1 lesser y1 greater
{
while(x1<9 && y1>0 && x1!=x2 && y1!=y2)
{
x1++;
y1--;
}
if(x1==x2 && y1==y2)
cout<<1<<endl;
else
cout<<2<<endl;
}
else if(x1>x2 && y1<y2)
{
while(x1>0 && y1<9 && x1!=x2 && y1!=y2)//x1 greater y1 lesser
{
x1--;
y1++;
}
if(x1==x2 && y1==y2)
cout<<1<<endl;
else
cout<<2<<endl;
}
else if(x1<x2 && y1<y2)
{
while(x1<9 && y1<9 && x1!=x2 && y1!=y2)//both lesser
{
x1++;
y1++;
}
if(x1==x2 && y1==y2)
cout<<1<<endl;
else
cout<<2<<endl;
}
}
return 0;
}
