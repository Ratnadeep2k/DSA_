#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    map<int,int> mpp;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
        /* code */
    }

    for(auto :it){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int  number;
        cin>>number ;
        cout<< mpp[number]<<endl;
    }
    

}