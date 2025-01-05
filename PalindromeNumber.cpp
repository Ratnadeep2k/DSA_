class Solution {
public:
    bool isPalindrome(int x) {
        int dump = x;
        long long revNum =0;
        while(x>0){
            int id = x%10;
            revNum = (revNum*10)+id;
            x = x/10;
        }
        if(dump==revNum) 
            return true;
        else 
            return false;
    }

};