#include<bits/stdc++.h>
class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        unordered_map<int,unordered_map<int,int>>balls;
         for(const auto&i :pick){
            int player =i[0];
            int color = i[1];
            balls[player][color]++;
         }
         int win =0;
         for(const auto& player :balls){
            int id = player.first;
            const auto& colorCounts = player.second;
            for(const auto& colorCount : colorCounts){
                if(colorCount.second > id){
                    win++;
                    break;
                }
            }
         }
         return win;
    }
};