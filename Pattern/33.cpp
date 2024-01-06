/*
*
**
* *
*  *
*   *
*    *
*******
for n=7
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==2 || i==n){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int m=1;m<=i-2;m++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
}