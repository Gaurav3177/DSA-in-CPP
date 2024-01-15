// Peak index in a mountain array

#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Peak index = "<<peak(arr,n);
    

}