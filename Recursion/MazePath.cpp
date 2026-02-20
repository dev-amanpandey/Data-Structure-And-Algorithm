#include<iostream>
using namespace std;
int MazePath(int sr, int sc, int er, int ec){
if(sr>er||sc>ec) return 0;
if(sr==er&& sc==ec) return 1;    
int rightways= MazePath(sr,sc+1,er,ec);
int downways= MazePath(sr+1,sc,er,ec);
int totalways= rightways+downways;
return totalways;
}
int main(){
cout<<MazePath(1,1,5,5);
}