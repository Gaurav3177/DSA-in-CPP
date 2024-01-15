// First and last occurence of a sorted array.

#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int val=-1;
    while(s<=e){
        if(key==arr[mid]){
            val=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return val;
}
int last(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int val=-1;
    while(s<=e){
        if(key==arr[mid]){
            val=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return val;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<"First occurence = "<<first(arr,n,key)<<endl;
    cout<<"Last occurence = "<<last(arr,n,key)<<endl;

}