#include <iostream>
using namespace std;
#include<vector>
#include<tuple>
int main()
{
  tuple<int,string,int,int> t;
  t=make_tuple(101,"anu",21,20000);
  cout<<"roll no="<<get<0>(t)<<"\t";
cout<<"name="<<get<1>(t)<<"\t";
cout<<"age="<<get<2>(t)<<"\t";
cout<<"salary="<<get<3>(t)<<"\t";
  /*vector<pair<int,string>>v;
  int r,n;
  string name;
  cout<<"enter how many records\n";
  cin>>n;
  for(int i=0;i<n;++i)
  {
    cout<<"enter rollno\n";
    cin>>r;
    cout<<"enter name\n";
    cin>>name;
    //v.push_back(make_pair(r,name));
    v.push_back({r,name});
  }
  for(auto p:v)
  {
cout<<"roolno="<<p.first<<"\t"<<"name="<<p.second<<"\n";
  }*/


/*pair<int,string>p;
pair<string,string>p2;
p.first=101;
p.second="roni";
cout<<p.first<<","<<p.second<<"\n";
p2.first="sun";
p2.second="moon";
cout<<p2.first<<","<<p2.second<<"\n";*/

}