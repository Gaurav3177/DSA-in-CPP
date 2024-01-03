/*
D
CD
BCD
ABCD
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        char row='A'+(n-i);
        for(int j=0;j<i;j++){
            char col=row+j;
            cout<<col;
        }
        cout<<"\n";
    }
}