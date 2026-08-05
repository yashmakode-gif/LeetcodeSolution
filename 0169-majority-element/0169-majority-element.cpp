class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> yash;
        int k=0;
        for(int i=0;i<nums.size();i++){
            yash[nums[i]]++;
        }

        for(int i=0;i<nums.size();i++){
            if(yash[nums[i]]>nums.size()/2){
                k=nums[i];
            }
        }
        return k;
    }
};
