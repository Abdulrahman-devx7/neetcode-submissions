class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> nums2;
        for(short i =0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
                nums2.push_back(nums[i]);
        }
        nums = nums2;
        return nums2.size();
    }
};