#include<iostream>
using namespace std;
#include<tuple>
#include<vector>
int main()
{
  vector<tuple<int,string,string,string>>v;
  int n,rno;
  string name,adrs,crs;
  cout<<"enter no of records\n";
  cin>>n;
  for(int i=0;i<n;++i)
  {
    cin>>rno;
    cin>>name;
    cin>>adrs;
    cin>>crs;
    v.push_back({rno,name,adrs,crs});
    //v.push_back(make_tuple(rno,name,adrs,crs));
  }
  cout<<"display the values of vector\n";
  for(int i=0;i<n;i++)
  {
    cout<<get<0>(v[i])<<get<1>(v[i])<<get<2>(v[i])<<get<3>(v[i])<<"\n";
  }
  
  /*tuple<int,int,int>t;
  t=make_tuple(100,2001,34567);
  cout<<"rno="<<get<0>(t);
   cout<<"pwd="<<get<1>(t);
    cout<<"salary="<<get<2>(t);*/

}