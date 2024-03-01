#include <iostream>
using namespace std;
class cybrom
{int n,fact;
  public:void sqr(int a)
  {
    for(int n=1;n<=10;n++){
    cout<<n*a<<"\t";
    }
    
  }
};
int main()
{
  cybrom g;
  g.sqr(5);
}