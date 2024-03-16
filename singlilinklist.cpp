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
  bool p=search(h,10);
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
  while(even!=NULL && even->nxt!=NULL)
  {
    //  odd->nxt=odd->nxt->nxt;
    //  odd = odd->nxt;
     even->nxt = even->nxt->nxt;
     even= even->nxt;
       odd->nxt=odd->nxt->nxt;
     odd = odd->nxt;
  }
  odd->nxt= evenhead;
  return h;
}

// node *rev (node *&h)
// {
//   if(h==NULL || h->nxt==NULL)
//   {
//     return h;
//   }
//   node *newhead = rev (h->nxt);
//   h->nxt->nxt=h;
//   h->nxt=NULL;
//   return newhead;
// }

int main()
{
  node *h=NULL;
  insert(h,10);
  insert(h,20);
  insert(h,3);
  insert(h,5);
  insert(h,50);
  insert(h,67);
  display(h);
  cout<<"oddevenlist\n";
  listnode(h);
  display(h);
  // node *nh=rev(h);
  // display(nh);
}

