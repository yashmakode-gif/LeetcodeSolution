class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int add1=0;
        int add2 = 0;
        for(int num : nums){
        if(num < 10){
            add1 = add1 + num;
        }else{
            add2 = add2 + num;
        }
        }
        if(add1 != add2){
            return true;
        }
        return false;
    }
};