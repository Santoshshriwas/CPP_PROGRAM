#include<iostream>
#include<thread>
using namespace std;
void even()
{
    for(int i=2;i<20;i++)
    {
        if(i%2==0)
        {
          cout<<"even no"<<i<<"\n";    
        }
    }
}
void odd()
{
    for(int i=2; i<20;i++)
    {
        if(i%2!=0)
        {
            cout<<"odd no "<<i<<"\n";

        }

    }
}

int main(){
    thread t1(even);
    thread t2(odd);
    t1.join();
    t2.join();
    return 0;
}