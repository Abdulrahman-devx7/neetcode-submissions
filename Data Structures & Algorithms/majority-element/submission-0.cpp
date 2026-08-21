class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Why not sort the array and then and keep going on numbers one by one
        // and keep counting conscecutive numbers until you've found some number 
        // that has repitition times that are larger than n/2
        // we can also utilize a hashmap, for frequencies in real time
        //But this would just add an overhead of O(N) space, so we'll just sort here. The worst case
        // scenario wouldn't be like nlogn
        sort(nums.begin(), nums.end());
        int mjrtyCount = 1, mjrtyNumber=nums[0];

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==mjrtyNumber)
            {
                mjrtyCount++;
                if(mjrtyCount>nums.size()/2)
                    break;
            }
            else
            {   
                mjrtyNumber = nums[i];
                mjrtyCount=1;
            }
        }

        return mjrtyNumber;
    }
};