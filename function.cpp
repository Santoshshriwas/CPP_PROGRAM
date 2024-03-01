#include <iostream>
using namespace std;
void cube(int a){
    std::cout<<"cube"<<a*a*a;
}
int main(){
    int r;
    cout<<"Enter a number \n";
    cin>>r;
    cube(r);
    return 0;
}