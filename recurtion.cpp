/*
#include <iostream>
using namespace std;

void rec(int n)
{
  if(n==0)
  {
    return;
  }
  // n--;
  cout<<n<<"\n";//desending  (head)
  rec(n-1);
  //cout<<n<<"\n";//asending  (tail)
}

int main()
{
  int n;
  cout<<"Enter any No \n";
  cin>>n;
  rec(n);
}
*/
// tree recurtion
/*
#include <iostream>
using namespace std;
int pow(int a , int n)
{
  if(a==0)
  {
    return 0;
  }
  if(n==0)
  {
    return 1;
  }
   int re=a*pow(a,n-1);
  return re;
}

int main()
{
  int  a;
  cout<<"Enter a base \n";
  cin>>a;
  int n;
  cout<<"Enter any power no \n";
  cin>>n;
  cout<<pow(a ,n);
}
*/
/*
#include <iostream>
using namespace std;
int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  
   int re=n*fact(n-1);
  return re;
}

int main()
{
  
  int n;
  cout<<"Enter any for factorial \n";
  cin>>n;
  cout<<fact(n);
}

*/
/*
// fibonacci
#include <iostream>
using namespace std;
int fib(int f)
{
  if(f==0)
  {
    return 0;
  }
  if(f==1)
  {
    return 1;
  }
  
   int ans=fib(f-1)+fib(f-2);
  return ans;
}

int main()
{
  
  int f;
  cout<<"Enter fibonacci term \n";
  cin>>f;
  cout<<fib(f);
}

*/

// pilindrom

/*
#include <bits/stdc++.h>
using namespace std;
int plndrm(string &s int i, int j)
{
  if(i==j)
  {
    return true;
  }
  if(s[i]!=s[j])
  {
    return false;
  }
   int ans=fib(f-1)+fib(f-2);
  return ans;
}
plndrm(s,i+1,j-1);
return true;

int main()
{
  
  string s = "madam";
  if(plndrm(s,0,s.length()-1))
  {
      cout<<"PalinDrom";
  }
  else
  {
      cout<<"Not PalinDrom";
  }
}
*/
/*
// SAY DIGIT
#include <iostream>
using namespace std;
void dgt (int p , string s[])
{
  if(p==0)
  {
    return ;
  }
  int d=p%10;
  // cout<<s[d];
  p=p/10;
  dgt(p,s);
  cout<<s[d];
}

int main()
{
  int p;
  string arr[]={"zero","one","two","three","for","five","six","seven","agith" , "nine","ten"};
  cout<<"Enter Digits";
  cin>>p;
  dgt(p,arr);
}


*/
/*
// recurtion se bubble sort q1
#include <iostream>
using namespace std;
void bubble (int *a , int j)
{
  if(j==1 || j==0)
  {
    return ;
  }
  for(int i=0;i<j-1;++i)
  {
    if(a[i]>a[i+1])
    {
      swap(a[i],a[i+1]);
    }
  }
  bubble(a,j-1);
}

int main()
{
  int a[]={2,4,10,3,20};
  bubble(a,5);
  for(int i=0;i<5;++i)
  {
    cout<<a[i]<<"\n";
  }
}

*/

#include <iostream>
using namespace std;
int stair (int a)
{
  if(a<0)
  {
    return 0;
  }
  if(a==0)
  {
    return 1;
  }
  int ans= stair(a-1)+stair(a-2);
  return ans;
}
int main()
{
    int a;
    cout<<"Enter stair position number  \n";
    cin>>a;
    cout<<stair (a);
  
}