#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
 forward_list<int> sbi{1,400,3,2,5};
 forward_list<int> boi{100,6,4,200,300};
 forward_list<int>::iterator it1=sbi.begin();
 forward_list<int>::iterator it2=boi.begin();
 cout<<"data of sbi\n";
 while(it1!=sbi.end())
 {
  cout<<*it1<<"\n";
  it1++;
 }
 cout<<"data of boi\n";
 while(it2!=boi.end())
 {
  cout<<*it2<<"\n";
  it2++;
 }
 sbi.sort();
 boi.sort();
 sbi.merge(boi);
 cout<<"after merging\n";
 forward_list<int>::iterator it3=sbi.begin();
 while(it3!=sbi.end())
 {
  cout<<*it3<<"\n";
  it3++;
 }
 sbi.remove(100);
 cout<<"after removing\n";
 forward_list<int>::iterator it4=sbi.begin();
 while(it4!=sbi.end())
 {
  cout<<*it4<<"\n";
  it4++;
 }
sbi.remove_if([](int x){ return x>200;});
forward_list<int>::iterator it5=sbi.begin();
 while(it5!=sbi.end())
 {
  cout<<*it5<<"\n";
  it5++;
 }


 /*fwd.push_front(12);
 fwd.push_front(13);
 fwd.push_front(90);
 fwd.push_front(32);
 //fwd.pop_front();
 forward_list<int>::iterator it=fwd2.begin();
 //fwd.insert_after(it,300);
fwd2.sort();
 fwd2.unique();*/
 /*while(it!=fwd2.end())
 {
  cout<<*it<<"\n";
  it++;
 }*/
 

  
  
  
  
  
  /*int n;
  cout<<"enter value\n";
  cin>>n;
  auto p=[](int a){return a>20;};
  cout<<p(n)<<"\n";
  cout<<p(9)<<"\n";
  cout<<[](int a){return a>0;}(4);*/
}
