// Scope of variables
#include<iostream>
using namespace std;
int main(){
    int a=3;
    cout<<a<<endl;
    if(true){
        int a=5;
        cout<<a<<endl;
        // the scope of this variable is inside this block and cannot be accessed outside.
    }
    cout<<a<<endl;
    cout<<"\n"<<"\n";

    if(true){
        int b=6;
        cout<<b<<endl;
    }
    // cout<<b; give error

    cout<<"\n"<<"\n";
    int c=7;
    for(int c=1;c<=7;c++){
        cout<<c;
    }
    cout<<"\n";
    for(;c<=7;c++){
        cout<<c;
    }
    cout<<"\n"<<"\n";

    int d=5;
    if(1){
        int d=1;
        cout<<d<<endl;
        if(1){
            int d=2;
            cout<<d<<endl;
            if(1){
                cout<<d<<endl;
            }
        }
    }
    cout<<d;



}