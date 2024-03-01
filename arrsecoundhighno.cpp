/*
#include <iostream>
using namespace std;
int main()
{
    int total,highest,secondHighest,arr[25];
    cout << "Enter number of elements : ";
     cin >> total;
    for (int i = 0; i < total; i++)
    {
        cout << "Enter array element : ";
        cin >> arr[i];
    }
    highest = arr[0];
    secondHighest = arr[0];
    for (int i = 1; i < total; i++) {
        {
            secondHighest = highest;
            highest = arr[i];
        }
    }
    cout << "Second highest number  : " << secondHighest;
}
*/

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void minimaxsum(vector<int> arr){
    int i,j,temp;
    int n=sizeof(arr);
    int sum=0;
    int low=INT_MAX;
    int high=0;

    for (j=0;j<n;j++){
        for (i=0;i<n;i++){
            sum+=arr[i];
        }
        temp=sum-arr[j];
        if(temp<low){
            low=temp;
        }
        else if(temp>high){
            high=temp;
        }
    }
    cout<<low;
    cout<<high<<endl;
}

int main (){
    vector<int> arr;
    arr.push_back(1.0);
    arr.push_back(2.0);
    arr.push_back(3.0);
    arr.push_back(1.0);
    arr.push_back(2.0);
    minimaxsum(arr);
    return 0;
}
