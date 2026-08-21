class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto it : map){
            if(it.second!=2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};