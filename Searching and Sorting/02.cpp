// Binary Search
// Time complexity O(logn)

#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
        int s=0;
        int e=n-1;
        int mid=(s+e)/2;
        for(s=0;s<=e;s++){
            if(key==arr[mid]){
                return mid;
            }
            else if(key>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return -1;
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

    if(binarysearch(arr,n,key)==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<binarysearch(arr,n,key);
    }

}