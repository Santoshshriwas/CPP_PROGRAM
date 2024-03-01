#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main()
{
     unordered_map<string, int>mp;
     mp .insert ({"sun",102});
     mp["mon"]=32;
     mp["mon"]=90;
     for(auto p=mp.begin();p!=mp.end();++p)
     {
      cout<<p->first<<"="<<p->second<<"\n";
     }
     /*mp.erase("sun");
     for(auto p=mp.begin();p!=mp.end();++p)
     {
      cout<<p->first<<"="<<p->second<<"\n";
     }
     //mp.clear();
     cout<<mp.size()<<"\n";
     cout<<mp.max_size();*/


 
}