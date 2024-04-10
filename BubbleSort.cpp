#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[],int n){
    for (size_t i = n-1; i>=0; i--)
    {
        /* code */
        for (size_t j = 0; j<= i-1; j++)
        {
            /* code */
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
}
int main(){


    int n;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    return 0;
}

