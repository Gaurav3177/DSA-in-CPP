/*
AAAA
BBBB
CCCC
DDDD
for n=4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=1;j<=n;j++){
            // cout<<'A'+i-1 gives ascaii values
            cout<<ch;
        }
        cout<<"\n";
    }

}