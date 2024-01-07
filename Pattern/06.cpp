/*
9 8 7
6 5 4
3 2 1
for n=3
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=n*n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<count<<" ";
            count--;
        }
        cout<<"\n";
    }
}
