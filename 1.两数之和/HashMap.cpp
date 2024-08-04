class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashtable;
        for (int i=0;i<nums.size();i++){
            hashtable[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int cha=target-nums[i];
            if(hashtable.count(cha)&&hashtable[cha]!=i){
                return {i,hashtable[cha]};
            }
        }
        return {};
    }
};