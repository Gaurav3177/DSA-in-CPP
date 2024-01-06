/*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int m=1;m<=(i-1)*2-1;m++){
            cout<<" ";
        }
        if(i>1){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int j=1;j<n;j++){
        for(int x=1;x<=j;x++){
            cout<<" ";
        }
        cout<<"*";
        for(int y=1;y<=(n-j-1)*2-1;y++){
            cout<<" ";

        }
        if(j<n-1){
            cout<<"*";
        }
        cout<<"\n";

    }
}