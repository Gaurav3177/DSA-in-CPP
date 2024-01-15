// Linear Search

#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
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
    if(linearsearch(arr,n,key)==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index "<<linearsearch(arr,n,key);
    }
  
}
