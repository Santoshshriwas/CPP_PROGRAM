#include<iostream>
using namespace std;
int main()
{
  int array[100],n,c,d,swap,posction;
  cout<<"enetr number of elements\n";
  cin>>n;
  cout<<"Enter Values\n";
  for(c=0;c<n;c++)
  {
    cin>>array[c];
  }
  for(c=0;c<=n-1;c++)
  {
    posction = c;
    for(d=c+1;d<n;d++)
    {
      if(array[posction]>array[d])
      {
        posction=d;
      }
    }
    if(posction !=c)
    {
      swap=array[c];
      array[c]=array[posction];
      array[posction]=swap;
    }
  }
  cout<<"sorted list in ascending order \n";
  for(c=0; c<n;c++)
  cout<<array[c]<<"\n";
  return 0;
}