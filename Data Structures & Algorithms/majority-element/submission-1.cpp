class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> freqContainer;
        for(int i=0; i<nums.size(); i++)
        {
            freqContainer[nums[i]]++;
        }
        
        for(const auto& [number, freq] : freqContainer)
        {
            if(freq>nums.size()/2)
                return number;
        }
    }
};