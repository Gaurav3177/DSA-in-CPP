/*
     *
    * *
   *   *
  *     *
 *       *
***********
for n=6
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int r=n-i;
        if(i==n){
            for(int j=1;j<=(i*2)-1;j++){
                cout<<"*";
            }
        }
        else{
            for(int x=1;x<=r;x++){
                cout<<" ";
            }
            cout<<"*";

            for(int y=1;y<=((i-1)*2)-1;y++){
                cout<<" ";
            }
            if(i!=1){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}

