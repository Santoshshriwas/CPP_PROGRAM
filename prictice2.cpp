#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>
#include<algorithm>
#include<vector>
#include<map>
int main()
{
   
   map<int,int>mp;
   mp[200]=20;
   mp.insert({101,23});
   mp.insert({102,24});
   mp.insert({102,24});
   mp.insert({10,24});
   mp[56];
   for(auto it=mp.begin();it!=mp.end();++it)
   {
    cout<<it->first<<"\t"<<it->second<<"\n";
   }
   auto f=mp.find(102);
   if(f!=mp.end())
   {
    cout<<mp.erase(f->first);
   }
   else
   {
    cout<<"Not Found";
   }
   cout<<" New Data \n";
   for(auto it=mp.begin();it!=mp.end();++it)
   {
    cout<<it->first<<"\t"<<it->second<<"\n";
   }

  /*
  forward_list <int>f1{2,43,5,7,50};
  f1.insert_after(f1.begin(),9);
  forward_list<int>::iterator it=f1.begin();
  while(it!=f1.end())
  {
    cout<<*it<<"\n";
    ++it;
  }
  */
  // Assendin order Data and disending order use lemda function time complexcity oderof o(n)
  /*
  vector<int>v{13,545,45,42,5,1};
  sort(v.begin(),v.end(),[] (int a,int b){return  a>b;});
  for(auto p:v)
  {
    cout<<p<<"\n";
  }
  */
}