// Square root in float in o(logn)

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

double infloat(int n,int p,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<p;i++){
        factor=factor/10;
        for(double j=ans; j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp=sqrt(n);
    cout<<infloat(n,3,temp);



}