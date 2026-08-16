class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>result = {0,0};
        unordered_map<int, int>differences;

        for(short i = 0; i<nums.size(); i++)
        {
            if(!differences.contains(target-nums[i]))
                differences.insert({nums[i], i});
            else 
            {
                result[0] = differences[target-nums[i]];
                result[1] = i;
            }
        }
        return result;
    }
};
