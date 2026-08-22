class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        unordered_multiset<int> nonVals;
        for (short i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] != val)
                nonVals.insert(nums[i]);
            nums.pop_back();
        }

        for (auto& number : nonVals)
        {
            nums.push_back(number);
        }
        return nums.size();
    }
};
