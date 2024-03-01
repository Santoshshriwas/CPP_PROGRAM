#include<iostream>
using namespace std;
#include<map>
#include<vector>
void vsub(vector<int>&v1,vector<int>&v2)
{
  map<int,int>mp;
  for(int i=0;i<v1.size();++i)
  {
mp[v1[i]]=i;
  }
for(int j=0;j<v2.size();++j)
{
  if(mp.find(v2[j])==mp.end())
  {
    cout<<"No";
  }
}      
}
int main()
{
  vector<int>v1{5,2,1,3,9};
  vector<int>v2{1,3};
  vsub(v1,v2);
}