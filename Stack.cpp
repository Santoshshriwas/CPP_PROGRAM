
#include <iostream>
using namespace std;
#define n 50
class stack
{
  int *arr;
  public:int top;
  public:stack()
  {
    arr = new int[n];
    top=-1;
  }
   void push (int a){
    if(top == n-1){
      cout<<"overflow\n";
      return;
    }
    top++;
    arr[top]=a;
   }
   void pop()
   {
    if(top==-1)
    {
      cout<<"no Element to pop \n";
      return;
    }
    top--;
   }
   int tops()
   {
    if(top==-1)
    {
      cout<<"no elements\n";
      return -1;
    }
    return arr[top];
   }
   bool empty()
   {
    return -1;
   }
};
int main()
{
  stack st;
  st.push(10);
  st.push(23);
  st.push(55);
  cout<<"Top element in ="<<st.tops()<<endl;
  while(!st.empty())
  {
   cout<<st.tops()<<"\n";
   st.pop();
  }
}
/*
#include <iostream>
using namespace std;
#include <stack>
void rev (string s)
{
    stack<string>st;
    for(int i=0; i<s.length();++i)
    {
      string wrd="";
      while(s[i]!=' ' && i<s.length())
      {
        wrd +=s[i];
        i++;
      }
      st.push(wrd);
    }
    while(!st.empty())
    {
      cout<<st.top()<<" ";
      st.pop();
    }
    cout<<endl;
};
int main()
{
  string wrd = "blue is sky";
  rev (s);
}
*/