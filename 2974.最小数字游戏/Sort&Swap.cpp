class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 1) {
                swap(arr[i], arr[i - 1]);
            }
        }
        return arr;
    }
};