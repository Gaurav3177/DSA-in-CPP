/*
A
BC
CDE
DEFG
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char row='A'+i;
        for(int j=0;j<=i;j++){
            char col=row+j;
            cout<<col;
        }
        cout<<'\n';
    }
}