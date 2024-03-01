#include<iostream>
using namespace std;
bool iso(string &s1,string &s2, int n1, int n2)
{
      int m1[256]={0};
      int m2[256]={0};
      if(n1!=n2)
      {
        return false;
      }
      for(int i=0;i<n1;++i)
      {
        if(!m1[s1[i]] and !m2[s2[i]])
        {
          m1[s1[i]]=s2[i];
          m2[s2[i]]=s1[i];
        }
        else if(m2[s2[i]]!=s1[i])
        {
           return false;
        }
      }
      return true;
}
int main()
{
  string s1="add";
  string s2="off";
  bool c=iso(s1,s2,s1.size(),s2.size());
  if(c)
  {
    cout<<"yes";
  }
  else
  {
    cout<<"No";
  }
}