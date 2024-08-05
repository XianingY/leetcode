class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for (int p = 0; p < n - 3; p++) {
            if ((long)nums[p] + nums[p + 1] + nums[p + 2] + nums[p + 3] > target) break;
            if ((long)nums[p] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target) continue;
            
            if(p>0&&nums[p]==nums[p-1])
                continue;
            
            
            for(int q=p+1;q<n-2;q++){
                
                if(q>p+1&&nums[q]==nums[q-1])
                    continue;

                int i = q + 1;
                int j = n - 1;
                
                while (i < j) {
                    long  sum = (long)nums[p] + nums[q] + nums[i] + nums[j];

                    if (sum < target) {
                        while (i < j && nums[i] == nums[++i])
                            ;
                    }
                    else if (sum > target) {
                        while (i < j && nums[j] == nums[--j])
                            ;
                    }
                    else{
                        ans.push_back({nums[p], nums[q], nums[i], nums[j]});
                        while (i < j && nums[i] == nums[++i])
                            ;
                        while (i < j && nums[j] == nums[--j])
                            ;
                    }
                }
            }
        }

        return ans;
    }
};