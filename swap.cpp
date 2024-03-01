#include<iostream>
using namespace std;
swap code
int main(){
    int x= 2;
    int y= 5;
    cout<<x<<" "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}

// without using extra variavle

// int main(){
//     int x=2;
//     int y=5;
//     cout<<x<<" "<<y<<endl;

//     x= x+y;
//     y= x-y;
//     x= x-y;
//     cout<<x<<" "<<y<<endl;
// }