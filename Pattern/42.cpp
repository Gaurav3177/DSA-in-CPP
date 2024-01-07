/*
*                      *
* *                  * *
* * *              * * *
* * * *          * * * *
* * * * *      * * * * *
* * * * * *  * * * * * *
* * * * * *  * * * * * *
* * * * *      * * * * *
* * * *          * * * *
* * *              * * *
* *                  * *
*                      *
for n=6        
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=i;x++){
            cout<<"* ";
        }
        for(int y=1;y<=(n-i)*2+1;y++){
            cout<<"  ";

        }
        for(int x=1;x<=i;x++){
            cout<<"* ";
        }
        cout<<"\n";
    }

     for(int i=1;i<=n;i++){
        for(int x=1;x<=n-i+1;x++){
            cout<<"* ";
        }
        for(int y=1;y<=(i*2)-1;y++){
            cout<<"  ";

        }
        for(int x=1;x<=n-i+1;x++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}