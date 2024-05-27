//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    private: 
     bool static comp(Job &a, Job &b){
        return a.profit<b.profit;
    }
    public:
    //Function to find the maximum profit and the number of jobs done.

    vector<int> JobScheduling(Job arr[], int n) 
    
    {
          sort(arr, arr+n, comp);
        
        int deadline=0;
        for(int i = 0; i<n ; i++){
            deadline = max(deadline, arr[i].dead);
        }
        
        int sum=0;
        int cnt=0;
      
        vector<int> ans(deadline+1 , -1);
        for(int i= n-1 ; i >=0 ; i--){
            int pos= arr[i].dead;
           
            while(ans[pos] != -1){
                pos--;
            }
            if(pos >0  && ans[pos] == -1 ){
                cnt++;
                sum+=arr[i].profit;
                ans[pos] = arr[i].id;
            }
            
        }
        return {cnt,sum};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends