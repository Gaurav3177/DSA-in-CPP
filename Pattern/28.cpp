/*    
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int r=1;
        for(int j=0;j<=n-i;j++){
            cout<<r;
            r++;
        }
        for(int k=1;k<i;k++){
            cout<<"*";
        }
        for(int b=1;b<i;b++){
            cout<<"*";
        }
        int s=n-i+1;
        for(int l=0;l<=n-i;l++){
            cout<<s;
            s--;
        }
        
        cout<<"\n";
    }
}