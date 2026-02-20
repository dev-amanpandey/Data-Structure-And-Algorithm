#include<iostream>
using namespace std;
int main(){
    int n;
    int marks[n];
    int sum = 0;
    cout<<"enter the no. of elements : ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=n-1;i++){
        sum=sum+marks[i];
    }
    cout<<sum;

}