#include<iostream>
using namespace std;
#include<forward_list>
#include<iterator>
#include<algorithm>
int main()
{
  forward_list<int>f1{1,42,63,55,66,45};
  
  forward_list <int>::iterator it=f1.begin();
  /*  f1.sort(); // data assending order li liye
  // sort (f1.begin(),f1.end()); use nhi kar sakte


  while(it!=f1.end())
    {
      cout<<*it<<"\n";
      ++it;
    }
    */
    forward_list <int>::iterator it2=f1.begin();
    f1.reverse();
  while(it2!=f1.end())
    {
      cout<<*it2<<"\n";
      ++it2;
    }
    f1.assign({100,4,300,56,46,44,23,6,5,65,66,35,5});
    forward_list <int>::iterator it3=f1.begin();
  while(it3!=f1.end())
    {
      cout<<*it3<<"\n";
      ++it3;
    }
    
    cout<< "\n Totaol value "<<distance(f1.begin(),f1.end());
f1.resize(20);
forward_list <int>::iterator it4=f1.begin();
  while(it4!=f1.end())
    {
      cout<<*it4<<"\n";
      ++it4;
    }
  f1.clear();
*/
}