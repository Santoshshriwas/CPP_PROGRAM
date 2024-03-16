/*
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
};
int main()
{
  node *root=new node(10);
  root->l=new node(20);
  root->r=new node(30);
  root->l->r=new node(5);
  cout<<root->l->r->data<<"->"<< root->l->data<<"->"<<root->data<<"->"<<root->r->data;

}
*/


// pre post in order
/*
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
};
void preorder(node *root)
{
  if(root==NULL)
  return;
cout<<root->data<<" ";
preorder (root->l);
preorder(root->r);
}
void postorder(node *root)
{
  if(root==NULL)
  return;
postorder (root->l);
postorder(root->r);
cout<<root->data<<" ";
}
void inorder(node *root)
{
  if(root==NULL)
  return;
inorder (root->l);
cout<<root->data<<" ";
inorder(root->r);
}

int main()
{
  node *root=new node(10);
  root->l=new node(20);
  root->r=new node(30);
  root->r->l=new node(5);
  root->l->r=new node(6);
  cout<<"\n preorder\n";
   preorder (root);
  cout<<"\n postorder\n";
  postorder (root);
  cout<<"\n inorder\n";
  inorder (root);
}
*/

//  find to root se hight nikalani hai
/*

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

int height (node *h)
{
  if(h==NULL)
  {
    return 0;
  }
  int left=height (h->l);
  int right=height (h->r);
  int result=max(left,right)+1;
  return result;
}
};
int main()
{
  node *root=new node(10);
  root->l=new node(20);
  root->r=new node(30);
  root->l->l=new node(5);
  root->l->r=new node(50);
  root->l->r->l=new node(60);
  root->l->r->l->l=new node(6);
  cout<<root->height(root);
}
*/
/*
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
};
  node *bst (node *root, int v)
  {
    if(root == NULL)
    {
      return new node (v);
    }
    if(v<root->data)
    {
      root->l=bst(root->l,v);
    }
    else
    {
      root -> l= bst(root->r,v);
    }
    return root;
  }
  void inorder(node *root)
  {
    if(root==NULL)
    return;
  inorder(root ->l);
  cout<<root->data<<" ";
  inorder (root ->r);
  }
  
int main()
{
  node *root=NULL;
  root=bst(root,5);
  root=bst(root,1);
  root=bst(root,2);
  root=bst(root,6);
  root=bst(root,4);
  root=bst(root,2);
  inorder(root);
}
*/



#include<iostream>
using namespace std;

class node
{
  public:
    int data;
    class node *l;
    class node *r;
    node(int d)
    {
      data = d;
      l=NULL;
      r=NULL;
    }
};

void preorder(node *root)
{
  if(root==NULL)
    return;
  cout<<root->data<<" ";
  preorder(root->l);
  preorder(root->r);
}

void postorder(node *root)
{
  if(root==NULL)
    return;
  postorder(root->l);
  postorder(root->r);
  cout<<root->data<<" ";
}

void inorder(node *root)
{
  if(root==NULL)
    return;
  inorder(root->l);
  cout<<root->data<<" ";
  inorder(root->r);
}

int main()
{
  node *root=new node(10);
  root->l=new node(20);
  root->r=new node(30);
  root->r->l=new node(5);
  root->l->r=new node(6);

  cout<<"Preorder Traversal:\n";
  preorder(root);
  
  cout<<"\nPostorder Traversal:\n";
  postorder(root);
  
  cout<<"\nInorder Traversal:\n";
  inorder(root);

  return 0;
}  
