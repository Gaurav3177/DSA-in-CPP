/*
* * * * * *  * * * * * *
* * * * *      * * * * *
* * * *          * * * *
* * *              * * *
* *                  * *
*                      *
*                      *
* *                  * *
* * *              * * *
* * * *          * * * *
* * * * *      * * * * *
* * * * * *  * * * * * *
for n=6
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=(n-i)+1;x++){
            cout<<"* ";
        }
        for(int y=1;y<=(i*2)-1;y++){
            cout<<"  ";
        }
        for(int z=1;z<=(n-i)+1;z++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    for(int j=1;j<=n;j++){
        for(int k=1;k<=j;k++){
            cout<<"* ";
        }
        for(int m=1;m<=(n-j)*2+1;m++){
            cout<<"  ";
        }
         for(int k=1;k<=j;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}