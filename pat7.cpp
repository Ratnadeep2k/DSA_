#include<bits/stdc++.h>
using namespace std;

void print6(int n){
    for(int i=1;i<= 2*n-1;i++){
        int stars =i;
        if(i>n) stars =2*n-i;
        for (size_t j = 1; j <= stars; j++)
        {
            /* code */
            cout<<"* ";
        }
        cout<<endl;
        
        
    }
}
int main(){
    int n ;
    cin>> n;
    print6(n);
}