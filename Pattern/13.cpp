/*
abcd
abcd
abcd
abcd
for n=4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch='a'+j;
            cout<<ch;
        }
        cout<<"\n";
    }
}