#include <iostream>
using namespace std;
class emp
{
    int EMPID;
    int name[10];
    int HRA,DA,BASIC,NET;
}
    int calculater(){
        HRA =2000;
        DA =BASIC*10/100;
        NET = BASIC+HRA+DA;
        return 0;
    
    }
   int::get(){
    cout<<"Enter EmpId"
    cin>>EMPID;

    cout<<"Enter EmpName";
    cin>>name;

    cout<<"Enter Emp Basic Salary";
    cin>>BASIC;

    calculate();
   }
   int::pri(){
    cout<<endl<<"EmpId :"<<EMPID<<endl;
    cout<<"EmpName :"<<name<<endl;
    cout<<"EmpBasic :"<<BASIC<<endl;
    cout<<"Emp HRA :"<<HRA<<endl;
    cout<<"Emp DA:"<<DA<<endl;
    cout<<"EmpNet Salary :"<<NET<<endl;
   }

int main(){
    emp e;

    get();
    pri();
    return 0;
}