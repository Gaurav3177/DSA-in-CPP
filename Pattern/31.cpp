/*
***********     
 *       *
  *     *
   *   *
    * *
     *
  for n=6
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int j=1;j<=(n*2)-1;j++){
                cout<<"*";
            }
        }
        else{
            for(int x=1;x<=i-1;x++){
                cout<<" ";
            }
            cout<<"*";
            for(int y=1;y<=((n-i)*2)-1;y++){
                cout<<" ";
            }
            if(i<n){
                cout<<"*";
            }
        }
        cout<<"\n";
    }

}