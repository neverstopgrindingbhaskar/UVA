#include<bits/stdc++.h>
using namespace std;
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
for(auto i:non_dealer)
cout<<i<<" ";
cout<<endl;
for(auto i:dealer)
cout<<i<<" ";
cout<<endl;
}
return 0;
}
