#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   // string str = "aman pandey is at rkgit";
   // cout<<str.length();
   //string str="abcd";
   //cout<<str<<endl;
   //str.push_back('e');
   //str.pop_back();
   //cout<<str<<endl;
   string s  = "abdef";
   cout<<s<<endl;
   //s = s+"def"; //modify string
   reverse(s.begin(),s.end());
   cout<<s<<endl;
   
}