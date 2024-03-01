#include <iostream>
using namespace std;
#include<string>
int main()
{
  string nm;
  string t;
  cout<<"enter ur name\n";
getline(cin,nm);
cout<<"enter title\n";
cin>>t;
cout<<"name="<<nm<<"\n";
cout<<"length="<<nm.size()<<"\n";
cout<<"max size="<<nm.max_size()<<"\n";
cout<<"merge="<<nm.append(t)<<"\n";
nm.clear();
//cout<<"nm="<<nm<<"\n";
if(nm.empty())
{
  cout<<"yes it is empty";
}
else
{
  cout<<"not empty";
}
string t1="hello";
string t2="hello";
if(t1.compare(t2)==0)
{
  cout<<"matched";
}
else
{
  cout<<"not matched";
}

  
  /*char c[]={"hello"};
  string s;
  int t=0;
  cout<<"enter your collegename\n";
  cin>>s;
  cout<<"size of s="<<s.size()<<endl;
 t=sizeof(c)/sizeof(c[0]);
  cout<<"size of c"<<t;*/
}