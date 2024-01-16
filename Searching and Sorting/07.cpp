// Find given difference pairs in a sorted array in nlogn complexity

#include<iostream>
using namespace std;

int diff(int arr[],int n,int t){
    for(int i=0;i<n;i++){
        int val=arr[i]+t;
        int s=i+1;
        int e=n-1;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==val){
                cout<<"{"<<arr[i]<<","<<arr[mid]<<"}";
                cout<<"\n";
                break;
            
            }
            else if(val>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=(s+e)/2;
            

        }
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;

   
    diff(arr,n,t);
    


}


