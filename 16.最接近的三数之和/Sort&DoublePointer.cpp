class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int sum;
        int ans = nums[0] + nums[1] + nums[2];

        for (int k = 0; k < n; k++) {
            int i = k + 1;
            int j = n - 1;
            while (i < j) {

                sum = nums[k] + nums[i] + nums[j];

                if (sum == target)
                    return sum;

                if (abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                }

                if (sum < target) {
                    while (i < j && nums[i] == nums[++i]);
                } else {
                    while (i < j && nums[j] == nums[--j]);
                }
            }
        }
        return ans;
    }
};