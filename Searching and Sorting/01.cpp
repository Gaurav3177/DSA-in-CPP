// Linear Search

#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n,key;
    cout<<"Enter size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key = ";
    cin>>key;
    bool found=search(arr,n,key);

    if(found==1){
        cout<<"Key found";
    }
    else{
        cout<<"Key not found";
    }

}
