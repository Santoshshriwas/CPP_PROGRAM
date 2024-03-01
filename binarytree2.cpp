#include<iostream>
using namespace std;
class node
{
  public:int data;
  class node *l;
  class node *r;
  node(int d)
  {
    data = d;
    l=NULL;
    r=NULL;
  }

    bool isidenty (node *h1, node *h2)
    {
      if(h1==NULL && h2==NULL)
      {
        return true;
      }
      if(h1!=NULL && h2==NULL)
      {
        return false;
      }
      if(h1==NULL && h2!=NULL)
      {
        return false;
      }

      bool left =isidenty(h1->l,h2->l);
      bool right =isidenty(h1->r,h2->r);
      bool curval = h1->data==h2->data;
      if(left && right && curval)
      {
        return true;
      }
      else
      {
        return false;
      }
    }
};
int main()
{
  node *root1=new node(10);
  root1->l=new node(20);
  root1->r=new node(30);
  node *root2=new node(10);
  root2->l=new node(20);
  root2->r=new node(30);
  bool  c=root2->isidenty(root1, root2);
  if(c)
  {
     cout<<"trees are identical";
  }
  else
  {
    cout<<"trees are not identical";
  }
}