/*
      A
    B C
  D E F
G H I J
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        
        for(int m=1;m<=i;m++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
}