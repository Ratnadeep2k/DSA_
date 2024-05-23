class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        sort(bt.begin(),bt.end());
        int time =0 ;
        int waitingTime = 0;
        for(int i =0;i<bt.size();i++){
            waitingTime += time;
            time+=bt[i];
        }
        return (waitingTime / bt.size());
    }
};