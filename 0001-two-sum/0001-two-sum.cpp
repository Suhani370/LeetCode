class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            int sum=target-nums[i];
            if(m.find(sum)!=m.end()) {
                return {m[sum],i};
            }
            m[nums[i]]=i;
        }
        return {};
        
    }
};