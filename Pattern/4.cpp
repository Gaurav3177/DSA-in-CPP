/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
