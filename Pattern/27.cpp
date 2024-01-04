/*    
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int r=1;
        for(int x=1;x<=i;x++){
            cout<<r<<" ";
            r++;
        }
        int s=i-1;
        for(int y=1;y<i;y++){
            cout<<s<<" ";
            s--;
        }
        cout<<"\n";
    }
}