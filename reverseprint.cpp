#include <algorithm> 
#include<iostream>
#include<map>
using namespace std; 
int main() 
{ 
    
    // // Qusen 1
    // string str = "Santosh Shriwas Cybrom Bhopal"; 
    // reverse(str.begin(), str.end()); 
	// cout<<"\n"<<str; 
    // return 0;

    map<string , int> mp;
    int n;
    string s;
    cout<<"Enter how many Number\n";
    cin>>n;
    for(int i=0; i<n;++i)
    {
        cin>>s;
        mp[s]++;
    }
    for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";
    }
    }
    
    // roman to integer input value "VI"  output 6
/*
#include<iostream>
#include<map>
using namespace std; 

    int romen(string &s)
    {
       map<char , int>mp;
       mp['I']=1;
       mp['V']=5;
       mp['X']=10;
       mp['L']=50;
       mp['C']=100;
       mp['D']=500;
       int ans=0;
       for(int i=0;i<s.length();++i)
       {
        if(mp[s[i]]<mp[s[i+1]])
        {
            ans=ans-mp[s[i]];
        }
        else
        {
            ans=ans+mp[s[i]];
        }
       }
       return ans;
    }
    int main()
    {
    string s="VII";
    cout<<romen(s);
    }

    */