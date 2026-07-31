class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> prevmap;

        int n = nums.size();

        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            if(prevmap.find(diff)!=prevmap.end()){
                return {prevmap[diff],i};
            }
            prevmap.insert({nums[i],i});
        }
        return {};
    }
};
