/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
 for n=5
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
        if(i==1){
            cout<<i<<" ";
        }
        else{
            int count=i;
            for(int x=1;x<i;x++){
                cout<<count<<" ";
                count++;
            }
            int row=(i*2)-1;
            for(int y=1;y<=i;y++){
                cout<<row<<" ";
                row--;
            }

        }
        cout<<"\n";
    }
}
