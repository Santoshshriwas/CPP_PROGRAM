#include <iostream>
using namespace std;
#include <vector>
int coin (vector<int>&v,int s)
{
  if(s==0)
  {
    return 0;
  }
  if(s<0)
  {
    return INT_MAX;
  }
  int ans;
  int mini= INT_MAX;
  for(int i=0; i<v.size();++i)
  {
    ans =coin(v,s-v[i]);
    if(ans!=INT_MAX)
    {
      mini = min(mini,1+ans);
    }
  }
  return  mini;
}
int main()
{
  vector<int>v{1,2,3};
  int s = 5;
  int r= coin(v,s);
  if(r==INT_MAX)
  {
    cout<<"-1";
  }
  else
  {
    cout<<r;
  }
}

/*
// leetcode
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         if(amount==0)
  {
    return 0;
  }
  if(amount<0)
  {
    return INT_MAX;
  }
  int ans;
  int mini= INT_MAX;
  for(int i=0; i<coins.size();++i)
  {
    ans =coinChange(coins,amount-coins[i]);
    if(ans!=INT_MAX)
    {
      mini = min(mini,1+ans);
    }
  }
  if(mini==INT_MAX)
  {
    return -2;
  }
  else{
    return  mini;
  }
 
    }
};
*/