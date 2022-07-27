void solve(vector<int> nums, int index, vector<vector<int>>& ans){
        // base case
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(nums,index+1,ans);
            // back tracking
            swap(nums[index],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,index,ans);
        return ans;
    }