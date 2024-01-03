/*
ABCD
BCDE
CDEF
DEFG
for n=3
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char row='A'+i;
        for(int j=0;j<n;j++){
            char ch=row+j;
            cout<<ch;
        }
        cout<<"\n";
    }
}