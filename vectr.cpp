#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
#include<vector>
void missing(vector<int>&v)
{
  sort(v.begin(),v.end());
  int k=v[0];
  for(int i=0;i<v.size()-1;i++)
  {
  if(++k!=v[i+1])
  {
    cout<<k<<"\t";
    k++;
  } 
  }
}
int main()
{
  vector<int>v{1,3,2,5,6,8,10};
  missing(v);
}
/*void mis(vector<int>&v)
{
sort(v.begin(),v.end());
int t=v.back();
int c=v[0];
int n=v[0];
int e=0;
for(int i=n;i<t;i++)
{
  if(c==v[e])
  {
    c++;
  }
  else
  {
    cout<<"missing numbers="<<c<<"\t";
    c++;
    e--;
  }
e++;
}
}
int main()
{
  vector<int>r{1,2,4,5,7,8};
 mis(r);  
 return 0;
}*/
/*int twosum(array<int,5>a,int n,int t)
{
int left=0;
int right=n-1;
int sum=0;
sort(a.begin(),a.end());
while(left<right)
{
  sum=a[left]+a[right];
  if(sum==t)
  {
    return 1;
    break;
  }
  else if(sum<t)
  {
    left++;
  }
  else
  {
    right--;
  }
}
return -1;
}
int main()
  {
array<int,5>a{2,1,5,80,9};
cout<<twosum(a,5,8);
  }*/
