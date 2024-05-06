
int fun(int n ,vector<int> &dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fun(n-1,dp)+fun(n-2,dp);
        
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        cout<<fun(n,dp);
        return 0;
}