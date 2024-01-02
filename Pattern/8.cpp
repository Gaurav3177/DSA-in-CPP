/*
1
22
333
4444
55555
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}