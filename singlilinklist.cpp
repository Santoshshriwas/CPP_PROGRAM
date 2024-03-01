/*

#include <iostream>
using namespace std;
class node  // self refrence class
{
  public:int data;
  class node *nxt;
  node (int d)
  {
    data=d;
    nxt=NULL;
  }
};
void inserthead(node *&h,int v)
{
  node *n=new node(v);
  n->nxt=h;
  h=n;
}
void insertlast (node *&h, int v)
{
    node *n=new node(v);
    if(h==NULL)
    {
       h=n;
       return;
    }
    node *tem=h;
    while(tem->nxt!=NULL)
    {
      tem=tem->nxt;
    }
    tem->nxt=n;
}
void display(node *h)
{
  node *tem=h;
  while (tem!=NULL)
  {
    cout<<tem->data<<"->";
    tem=tem->nxt;
  }
  cout<<"NULL"<<endl;
}
bool search(node *h,int key)
{
  node *tem=h;
  while(tem!=NULL)
  {
    if(tem->data==key)
    {
      return key;
    }
    tem=tem->nxt;
  }
  return false;
}

int main ()
{
  node *h=NULL;
  insertlast (h, 10);
  insertlast (h, 20);
  insertlast (h, 30);
  display(h);
  inserthead (h, 40);
  display(h);
  bool p=search(h,30);
  if(p)
  {
    cout<<"found";
  }
  else
  {
    cout <<"not Found";
  }
}

*/

#include <iostream>
using namespace std;
class node  // self refrence class
{
  public:int data;
  class node *nxt;
  node (int d)
  {
    data=d;
    nxt=NULL;
  }
};
void insert (node *&h, int v)
{
    node *n=new node(v);
    if(h==NULL)
    {
       h=n;
       return;
    }
    node *tem=h;
    while(tem->nxt!=NULL)
    {
      tem=tem->nxt;
    }
    tem->nxt=n;
}

void display(node *h)
{
  node *tem=h;
  while (tem!=NULL)
  {
    cout<<tem->data<<"->";
    tem=tem->nxt;
  }
  cout<<"NULL"<<endl;
}

node *listnode(node *head)
{
  node *h=head;
  if(h==NULL)
    return h;

  node *odd=h;
  node *even =h->nxt;
  node *evenhead=even;
  while(even!NULL && even->nxt!=NULL)
  {

  }
}


