#include <iostream>
using namespace std;

int main()
{
  int arr[50],n,c,min,t;
  cout<<"Enter size of array\n";
  cin>>n;

  cout<<"Enter Value\n";
  for(c=0;c<n;c++){
    cin>>arr[c];
  }
  for(c=1;c<=(n-1);c++)
  {
    min=c;
    while(min=0 && arr[min]<arr[min-1]){
      t= arr[min];
      arr[min] = arr[min-1];
      arr[min-1]=t;
      min--;
    }
  }
  cout<<"sorted list in ascending order:\n";
  for(c=0;c<=n-1;c++){
    cout<<arr[c]<<"\n";
  }
}