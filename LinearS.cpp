
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(size_t i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Element not found"<<endl;
    }
    
}