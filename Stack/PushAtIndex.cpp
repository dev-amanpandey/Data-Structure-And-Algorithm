#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
    stack<int>temp;
    while(st.size()>0){
        

        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
}
}
void PushAtIndex(stack<int>&st,int idx,int val){
    stack<int>gt;
    while(st.size()>idx){
        gt.push(st.top());
        st.pop();
    }
    st.push(val);
    while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
    }
    print(st);
    
}
int main(){
    stack<int>st;
    stack<int>gt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    PushAtIndex(st,2,70);

}