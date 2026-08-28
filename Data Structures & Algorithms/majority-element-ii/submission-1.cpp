class Solution 
{
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> mostFrequent;
        unordered_map<int,int> freqMap;
        for(int i=0; i<nums.size(); i++)
        {
            freqMap[nums[i]]++;
        }

        if (freqMap.empty())
            return mostFrequent;

        for(auto & [number, freq]: freqMap)
        {
            if(freq>nums.size()/3)
                mostFrequent.push_back(number);
            if(mostFrequent.size()>1)
                break;
        }
        return mostFrequent;
        
    }
};          