/*
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 3 4 3 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n+1;i++){
        cout<<"* ";
        for(int m=1;m<i;m++){
            cout<<m<<" ";
        }
        int r=i-2;
        for(int x=1;x<i-1;x++){
            cout<<r<<" ";
            r--;
        }
        if(i>1){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int j=1;j<=n;j++){
        cout<<"* ";
        for(int k=1;k<=n-j;k++){
            cout<<k<<" ";
        }
        int s=n-j-1;
        for(int m=1;m<=n-j-1;m++){
            cout<<s<<" ";
            s--;
        }
        if(j<n){
            cout<<"*";
        }
        cout<<"\n";
    }
}