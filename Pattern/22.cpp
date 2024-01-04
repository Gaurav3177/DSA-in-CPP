/*
*****
 ****
  ***
   **
    *
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int m=0;m<=n-i;m++){
            cout<<"*";
        }
        cout<<"\n";
    }
}


