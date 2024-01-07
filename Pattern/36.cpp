/*
1
1  2  1
1  2  3  2  1
1  2  3  4  3  2  1
1  2  3  4  5  4  3  2  1
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int row=1;
        for(int j=1;j<=i;j++){
            cout<<row<<" ";
            row++;
        }
        int r=i-1;
        for(int x=1;x<i;x++){
            cout<<r<<" ";
            r--;

        }
        cout<<"\n";

    }
}