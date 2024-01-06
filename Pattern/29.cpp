/*
1
22
333
4444
55555
4444
333
22
1
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<n-i;
        }
        cout<<"\n";
    }
}