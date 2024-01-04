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
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int m=0;m<i;m++){
            cout<<i;
        }
        cout<<"\n";
    }
}
