class Solution {
public:
    
    map<vector<int>,int> m;
    
    void solve(vector<int> &nums,int i){
        if(i>=nums.size()){
            m[nums] = 1;
            return;
        }
        for(int k = i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            solve(nums,i+1);
            swap(nums[i],nums[k]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        vector<vector<int>> ans;
        for(auto it:m){
            ans.push_back(it.first);
        }
        return ans;
            
    }
};
