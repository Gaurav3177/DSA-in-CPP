// Search in a rotated sorted array.

#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=(s+(e-s)/2);
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+(e-s)/2);

    }
    return s;
    
}

int binary(int arr[],int s,int e,int key){
    
    int mid=s+(e-s)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
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
    int p=pivot(arr,n);
    if(key>=arr[p] && key<=arr[(n-1)]){
        cout<<binary(arr,p,n-1,key);
    }
    else{
        cout<<binary(arr,0,p-1,key);
    }


}

