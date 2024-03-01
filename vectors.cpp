#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>v1{1,32,6,5,7,8,9};
  for(auto j:v1)
  {
    cout<<j<<endl;
  }
  cout<<"size of v1="<<v1.size()<<"\n";
  v1.assign({2,3,3,2,3,4,5,6,9,5,8,7,8,7});
  for(auto j:v1)
  {
    cout<<j<<endl;
  }
  cout<<"size of v1 after assign="<<v1.size();
  //v1.clear();
  if(v1.empty())
  {
    cout<<"yes";
  }
  else 
  {
    cout<<"not empty";
  }
cout<<"front="<<v1.front()<<"\n";
cout<<"last="<<v1.back();
  /*vector<int>v1{32,4,3,5,7};
   vector<int>v2{10,20,30,40,50};
   cout<<"data of v1\n";
   for(auto a1:v1)
   {
    cout<<a1<<"\n";
   }
   cout<<"data of v2\n";
   for(auto a2:v2)
   {
    cout<<a2<<"\n";
   }
   v1.swap(v2);
   cout<<"after swapping data of v1\n";
   for(auto a2:v1)
   {
    cout<<a2<<"\n";
   }*/

  /*vector<int>::iterator t=v.end();
  v.erase(t-2);
  vector<int>::iterator t2=v.begin();
  v.erase(t2+1);
  for(auto k:v)
  {
    cout<<k<<"\n";
  }
  v.clear();
  cout<<"data of vector\n";
  for(auto k:v)
  {
    cout<<k<<"\n";
  }*/
  
  /*
  vector<int>v{100,3,2,4,56,4,7,9};
  vector<int>::iterator it=v.begin();
  v.insert(it+3,500);
  for(auto p:v)
  {
    cout<<p<<"\t";
  }
  */
  /*
vector<int>v;
v.push_back(10);
v.push_back(3);
v.push_back(2);
cout<<v.size()<<"\n";//3
cout<<v.capacity();//4 */
/*
vector<string>v1;
int n;
string s;
cout<<"enter how many string u wanna store\n";
cin>>n;
for(int i=0;i<n;i++)
{
 cin>>s;
 v1.push_back(s); 
}
cout<<"stored values\n";
for(auto k:v1)
{
  cout<<k<<"\t";
}
v1.pop_back();
cout<<"after pop_back\n";
for(auto k:v1)
{
  cout<<k<<"\t";
}*/




/*
  vector<int>v2(5);//default initialization=0
  vector<int>v2(5,100);
  cout<<v2.size()<<"\n";
  for(int i=0;i<v2.size();i++)
  {
    cout<<v2[i]<<"\t";
  }
for(auto p:v2)
{
  cout<<p<<"\t";
}*/

}