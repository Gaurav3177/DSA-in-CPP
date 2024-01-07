/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
***6*6*6*6*6*6***
for n=6
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i)+3;j++){
            cout<<"*";
        }

        if(i==1){
            cout<<i;
        }
        else{
            for(int m=1;m<i;m++){
                cout<<i<<"*";
            }
            cout<<i;
        }

        for(int k=1;k<=(n-i)+3;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}