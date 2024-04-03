#include <iostream>
using namespace std;
void rotate(int arr[], int n, int r) {
 

  int v[n];
  for(int i=0;i<n;++i){
    v[(i+r)%n]=arr[i];
  }
  for(int j=0;j<n;++j){
    cout<<v[j]<<"\t";
  }
}

int main() {
  int arr[] = {1, 2, 3, 4};
  int k = 1;
  rotate(arr,4,k);

  return 0;
}
