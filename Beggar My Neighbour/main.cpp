// DIFFICULT TO UNDERSTAND BETTER TRY ON OWN I ONLY CANNOT UNDERSTAND LOL
#include<bits/stdc++.h>
using namespace std;
int check(string str)
{
if(str[1]=='J')
return 1;
else if(str[1]=='Q')
return 2;
else if(str[1]=='K')
return 3;
else if(str[1]=='A')
return 4;
else
return -1;
}
void display(deque<string>s1,deque<string>s2)
{
cout<<"non dealer:";
for(auto i:s1)
cout<<i<<" ";
cout<<endl;
cout<<"    dealer:";
for(auto i:s2)
cout<<i<<" ";
cout<<endl;
}
int main()
{
string aux;
//needed two vectors one for dealer and another for non dealer;
string str;
while(cin>>str && str!="#")// check if the given char is not #
{
deque<string>non_dealer,dealer,arr;
queue<string>s1;
arr.push_back(str);// push the first element
for(int i=2;i<53;i++)
{
cin>>str;
arr.push_front(str);//push all the elements in reverse order
}
while(arr.size()>0)
{
dealer.push_back(arr.front());//dealer is being filled 
arr.pop_front();
non_dealer.push_back(arr.front());//non dealer being filled 
arr.pop_front();
}
// 1 if nondealer 1 else 2 for dealer
int player=1;
int cardsToBePlayed=-1;// if face card occurs how many cards to play
string aux1,aux2;
while(1)
{
if((dealer.size()==0 && cardsToBePlayed==-1) || (non_dealer.size()==0 && cardsToBePlayed==-1))
break;
//display(non_dealer,dealer);
if(player==1)//if player1
{
if(cardsToBePlayed==-1)// if there was no facecard played till now
{
aux=non_dealer.front();//check for the string
int num=check(aux);
non_dealer.pop_front();
if(num==-1)
s1.push(aux);
else
{
s1.push(aux);
cardsToBePlayed=num;
}
player=2;
}
else
{
if(non_dealer.size()>cardsToBePlayed)
{
int flag=0;
int count=0;
for(int i=0;i<cardsToBePlayed;i++)
{
aux=non_dealer.front();
int num1=check(aux);
non_dealer.pop_front();
if(num1==-1)
s1.push(aux);
else
{
flag=1;
s1.push(aux);
player=2;
cardsToBePlayed=num1;
break;
}
}
if(flag==0)
{
while(!s1.empty())
{
string a=s1.front();
dealer.push_back(a);
s1.pop();
}
cardsToBePlayed=-1;
player=2;
}
}
else
{
int flag=0;
int count=0;
for(int i=0;i<cardsToBePlayed && non_dealer.size()>0;i++)
{
count++;
aux=non_dealer.front();
int num1=check(aux);
non_dealer.pop_front();
if(num1==-1)
s1.push(aux);
else
{
flag=1;
s1.push(aux);
player=2;
cardsToBePlayed=num1;
break;
}
}
if(flag==0 && count>=cardsToBePlayed)
{
//if(non_dealer.size()>0)
//{
while(!s1.empty())
{
string a=s1.front();
dealer.push_back(a);
s1.pop();
}
cardsToBePlayed=-1;
player=2;
}
//}
else if(flag==0 && count<cardsToBePlayed)
break;
}
}
}
else if(player==2)
{
if(cardsToBePlayed==-1)
{
aux=dealer.front();
int num=check(aux);
dealer.pop_front();
if(num==-1)
s1.push(aux);
else
{
s1.push(aux);
cardsToBePlayed=num;
}
player=1;
}
else
{
int flag=0;
if(dealer.size()>cardsToBePlayed)
{
int count=0;
for(int i=0;i<cardsToBePlayed;i++)
{
aux=dealer.front();
int num1=check(aux);
dealer.pop_front();
if(num1==-1)
s1.push(aux);
else
{
flag=1;
s1.push(aux);
player=1;
cardsToBePlayed=num1;
break;
}
}
if(flag==0)
{
while(!s1.empty())
{
string a=s1.front();
non_dealer.push_back(a);
s1.pop();
}
cardsToBePlayed=-1;
player=1;
}
}
else
{
int flag=0;
int count=0;
for(int i=0;i<cardsToBePlayed && dealer.size()>0;i++)
{
count++;
aux=dealer.front();
int num1=check(aux);
dealer.pop_front();
if(num1==-1)
s1.push(aux);
else
{
flag=1;
s1.push(aux);
player=1;
cardsToBePlayed=num1;
break;
}
}
if(flag==0 && count>=cardsToBePlayed)
{
while(!s1.empty())
{
string a=s1.front();
non_dealer.push_back(a);
s1.pop();
}
cardsToBePlayed=-1;
player=1;
}
else if(flag==0 && count<cardsToBePlayed)
break;
}
}
}
//cout<<dealer.size()<<" "<<non_dealer.size()<<endl;
}
//display(non_dealer,dealer);
//cout<<s1.size()<<endl;
if(dealer.size()>=non_dealer.size())
{
if(player==2)
cout<<1<<std::right << std::setw(3)<<dealer.size()-1<<endl;
else
cout<<1<<std::right << std::setw(3)<<dealer.size()<<endl;
}
else
{
if(player==1)
cout<<2<<std::right << std::setw(3)<<non_dealer.size()-1<<endl;
else
cout<<2<<std::right << std::setw(3)<<non_dealer.size()<<endl;
}
}
return 0;
}
