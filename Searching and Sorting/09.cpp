// Square root in o(logn)

#include<iostream>
using namespace std;
long long int sqrt(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    // long long for bigger values simple int will give error
    long long int val=-1;
    while(s<=e){
        long long int sq =mid*mid;
        if(sq==n){
            return mid;
        }
        else if(sq<n){
            val=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
    }
    return val;
}
int main(){
    int n;
    cin>>n;
    cout<<sqrt(n);



}


