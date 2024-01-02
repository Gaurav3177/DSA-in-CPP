/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=0;j<i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }

    /* Another approach
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i + j - 1 << " ";
        }
        cout << "\n";
    }
    */
}