#include<bits/stdc++.h>
using namespace std;

void print6(int n){
    for(int i=0;i< n;i++){
        for (size_t j = 1; j <n-i-1 ; j++)
        {
            cout<< " ";
            
        }
        for (size_t j = 0; j < 2*i+1; j++)
        {
            cout<<" * ";
        }
        for (size_t j = 0; j <n-i-1 ; j++)
        {
            cout<< " ";
            
        }
        
        cout<<endl;
        
    }
}
int main(){
    int n ;
    cin>> n;
    print6(n);
}