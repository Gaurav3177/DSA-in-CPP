/* pascal triangle
            1
          1   1
        1   2   1
      1   3   3   1
    1   4   6   4   1
  1   5   10   10   5   1
  for n=6
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
      cout<<"  ";
    }
    int s=1;
    for(int m=1;m<=i;m++){
      cout<<s<<"   ";
      s=s*(i-m)/m;
    }
    cout<<"\n";
  }
}





