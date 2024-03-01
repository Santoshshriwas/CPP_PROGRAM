#include<iostream>
using namespace std;
#include<algorithm>
// #include<vector>
#include<stack>
/*
bool balance(string &s)
{
  stack<char>st;
  bool ans=true;
  int c=s.length();
  for(int i = 0; i<c; ++i)
  {
    if(s[i]=='{' || s[i]=='('||s[i]=='['){
      st.push(s[i]);
    }
    else if(s[i]=='}')
    {
      if(!st.empty() && st.top()=='{')
      {
        st.pop();
    }
    else
    {
      ans=false;
      break;
    }
  }
    else if(s[i]==')')
    {
      if(!st.empty() && st.top()=='(')
      {
        st.pop();
    }
    else
    {
      ans=false;
      break;
    }
  }
    else if(s[i]==']')
    {
      if(!st.empty() && st.top()=='[')
      {
        st.pop();
    }
    else
    {
      ans=false;
      break;
    }
  }
}
return ans;
}
*/
/*
// ex 3
 void rev(string &a)
 {
  string k;
  vector<string>v1;
  int c=a.length();
  for(int i=0; i<=c;++i)
  {
    if(a[i]==' ' || i==c)
    {
      k=k+' ';
      v1.push_back(k);
      k.clear();
    }
    else
    {
      k=k+a[i];
    }
  }
  reverse(v1.begin(),v1.end());
  for(auto p:v1)
  {
    cout<<p;
  }
 }
*/
int main()
{
  // Ex Pallindrome 
 /*
  string s1,s2;
  cout<<"enter Name \n";
  cin>>s1;
  s2=s1;
  reverse(s2.begin(),s2.end());
  if(s1==s2)
  {
    cout<<"Pallindrome";
  }
  else
  {
    cout<<"not Pallindrome";
  }
  */
    /*
   // ex 2
  string s="You Are Best Cybrom";
  // int n=s.length();
  int c=0;
  string s2="";
  for(int i=s.length()-1;s[i]!=' ';--i)
  {
      // c++;
    s2+=s[i];
  }
  // cout<<"length="<<c;
  reverse(s2.begin(),s2.end());
  cout<<"String="<<s2;
  */
  /*
  // Ex 3
  string a ="Sky is blue";
  rev (a);
*/
/*
string s= "({[])";
bool b=balance(s);
if(b)
{
  cout<<"Yes";
}
else
{
  cout<<"NO";
}
*/
}