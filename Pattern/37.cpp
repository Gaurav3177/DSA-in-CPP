/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<i;
        }
        else{
            for(int x=1;x<i;x++){
                cout<<i<<"*";
            }
            cout<<i;
        }
        cout<<"\n";
    }

    for(int j=1;j<=n;j++){
        if(j<n){
            for(int y=1;y<=n-j;y++){
                cout<<(n-j)+1<<"*";
            }
            cout<<(n-j)+1;
        }
        else{
            cout<<"1";
        }
        cout<<"\n";
    }

}

