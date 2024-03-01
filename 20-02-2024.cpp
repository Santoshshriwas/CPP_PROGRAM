#include<iostream>
#include<vector>
using namespace std;


void mv(vector<int>&v,int n)
{
  vector<int>v2;
  int c=0 k;
  for(int i=0; i<n; ++i)
  {
    if(v[i]!=0)
    {
      v2.push_back(v[i]);
      c++;
    }
  }
  while(c<n)
  {
    v2.push_back(0);
    c++;
  }
  for(auto p:v2)
  {
    cout<<v2<<"\t";
  }
}
int main()
{
  vector<int>v{23,0,1,0,5,0,6,7};
   mv(v,v.size());
}