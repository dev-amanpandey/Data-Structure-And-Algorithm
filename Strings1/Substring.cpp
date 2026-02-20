#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    cout<<s.substr(1,4);
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int n=str.length();
    cout<<str.substr(n/2);


}