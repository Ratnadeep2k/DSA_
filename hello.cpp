
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(size_t i=0;i<n;i++){
        cin>>arr[i];
    }
    for (size_t i = 0; i <n; i++)
    {
        /* code */
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
    
}