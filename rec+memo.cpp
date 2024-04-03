// DP


#include <iostream>
using namespace std;
#include<vector>
int fib(int n,vector<int>&dp)
{
  if(n==0)
  {
    return 0;
  }
  if(n==1)
  {
    return 1;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  dp[n]= fib(n-1,dp) + fib(n-2,dp);
  return dp[n];
}
int main()
{
  int n;
  cout<<"Enter Any tern of fibonachi \n";
  cin>>n;
  vector<int>dp (n+1,-1);
  // fib(n);
  cout<<fib(n,dp);
}