//1 Assending Order

/*
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;  
void sortString(string &str) 
{ 
sort(str.begin(), str.end()); 
cout << str; 
} 
int main() 
{ 
	string s = "zdxba"; 
  //sort(s.begin(),s.end());
	//cout<<s;
  sortString(s);
	return 0; 
} 
*/

//2 Palindrome
/*
//#include <string>
//#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
      string input;

      cout << "Please enter a string: ";
      cin >> input;

      if (input == string(input.rbegin(), input.rend())) {
      cout << input << " is a palindrome";
      }else{
         cout << "is NOT a palindrome.\n";
     }
}
*/

// 3 Missing a value
/*
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int missingArray[]={1,2,4,5,6,8};
    int n=sizeof(missingArray)/sizeof(missingArray[0]);
    int i=0,k=1;
    while (i<n)
    {
        if(missingArray[i]==k)
        {
            i++;
            k++;
        }
        else 
        {
           cout<<"The value of "<<k<<" is missing. \n";
           k++;
        } 
    } 
}
*/

// 4 
// #include <string>
// #include <algorithm>
// #include <iostream>
// using namespace std;
// int main()
// {
//   int farr[]={1,2,35,46,56,8,6,9};
//   int sarr[]={35,46};

// }

/*
#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
int count=0;
cout<<"Enter a string:";
cin>>s;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'||
    s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    {
        count++;
    }
    else{
      int  cp=-1;
    }
    
}
if(count!=0){
cout<<count;
}
else{
  int  cp=-1;
}

 }
 */ 
  /*
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char str[100] = "prepinsta";
    int vowels = 0;

    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
		    vowels++;
        }
        
    }
    
    cout << "Total Vowels : " << vowels;
    
    return 0;
}*/