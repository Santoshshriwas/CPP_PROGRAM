// #include <iostream>
// using namespace std;

// int main()
// {
//   int arr[20],n,c,d,t;
//   cout<<"Enter size of array\n";
//   cin>>n;

//   cout<<"Enter Value\n";
//   for(c=0;c<n;c++){
//     cin>>arr[c];
//   }
//   for(c=0;c<(n-1);c++){
//     for(d=0;d<n -c-1;d++)
//     {
//       if(arr[d]>arr[d+1])
//       {
//         t = arr[d];
//         arr[d]=arr[d+1];
//         arr[d+1]=t;
//       }
//     }
//   }
//   cout<<"sorted list in ascending order:\n";
//   for(c=0;c<n;c++){
//     cout<<arr[c]<<"\n";
//   }
// }

#include<iostream>
// #include<string>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {8, -901, 89, 0, 18, 791, -87};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + len, greater<>());

    cout<<"The descendingly order arr: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "\n ";
    }
}