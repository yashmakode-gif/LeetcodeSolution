class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
         int max = -1;
        for( auto it : map){
            if(it.second == it.first){
                if(it.first >max){
                    max= it.first;
                }
            }
    }
        if(max!=-1){
            return max;
        }else{
            return max;
        }
    }
};