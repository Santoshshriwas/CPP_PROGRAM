// #include <iostream>
// using namespace std;
// int main ()
// {
//   int a=12;  // a local variaval 
//   int &b=a;  // b refrance variaval
//   cout<<"Address of a :"<<&a<<"\n";
//   cout<<"Address of b :"<<&b<<"\n";
//   cout<<"Value of a :"<<a<<"\n";
//   cout<<"Value of b :"<<b<<"\n";

//   int *ptr; // wild pointer
//   // int *ptr2=&a;
//   // cout<<sizeof(ptr);
//   ptr=&a;
//   cout<<"Address of a :"<<ptr<<"\n";
//   cout<<"Address of ptr :"<<&ptr<<"\n";

//     cout<<"Value of ptr :"<<*ptr<<"\n";
//     int n;
//     cout<<"Enter the size of arr \n";
//     cin>>n;
//     int *t = new int();
//     cout<<"Enter "<<n<<"Values\n";

//     for(int i=0;i<n;++i)
//     {
//       cin<<t[i];
//     }
//     cout<<"output \n";
//     for(int i=0;i<n;++i)
//     {
//        cout<<t[i]<<"\n";
//     }
// }


// #include <iostream>
// using namespace std;
// int main ()
// {
//   int a=12;
//   int &b=a;
//   int *p=&a;
//   cout<<"Address of a = "<<&a<<"\n";
//   cout<<"Address of p = "<<p<<"\n";
//   cout<<"Address of *p = "<<*p<<"\n";
//   cout<<"Address of p = "<<&p<<"\n";
//   int* *ptr=&p;
//   cout<<"Address of *p = "<<ptr<<"\n";
//   cout<<"Address of *ptr = "<<*ptr<<"\n";
//   cout<<"Address of **p = "<<**ptr<<"\n";
// }


#include <iostream>
using namespace std;
int main ()
{
  int r,c;
  int joy[]={100,55,66};
  // cout<<0[joy]<<"\n";
  cout<<*joy<<"\n";
  cout<<joy[0]<<"\n";
  cout<<"Enter row Size =\n";
  cin>>r;
  cout<<"Enter Column Size =\n";
  cin>>c;
  int **p= new int*[r];
  for (int i=0;i<r;++i)
  {
    p[i]=new int[c];
  }
  cout<<"Enter Values \n";
  for (int i=0;i<r;++i)
  {
      for (int j=0;j<c;++j)
         {
           cin>>p[i][j];
         }
  }
  cout<<"Stored Values \n";
  for (int i=0;i<r;++i)
  {
      for (int j=0;j<c;++j)
         {
           cout<<p[i][j]<<"\t";
         }
         cout<<"\n";
  }
  
}