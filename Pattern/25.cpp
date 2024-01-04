/*
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
for n=5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        int row=i;
        for(int m=0;m<=n-i;m++){
            cout<<row<<" ";
            row++;
        }
        cout<<"\n";
    }
}