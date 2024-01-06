/*
* * * * * *
*         *
*         *
*         *
* * * * * *
for n=6
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int j=1;j<=n;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"*";
            for(int m=1;m<=((n-1)*2-1);m++){
                cout<<" ";
            }
            cout<<"*";

        }
        cout<<"\n";
    }
}
