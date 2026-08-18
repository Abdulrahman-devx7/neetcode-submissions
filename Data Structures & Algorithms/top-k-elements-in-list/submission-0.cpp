class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
     {
        unordered_map<short, short> freqMap;
        
        for (int num : nums)
         {
            freqMap[num]++;
        }
        
        vector<pair<short, short>> freqVec;
        
        for (auto const& [element, freq] : freqMap)
        {
            freqVec.push_back({freq, element});
        }
        
        sort(freqVec.begin(), freqVec.end());
        
        vector<int> result;
        int numsLength = freqVec.size();
        
        for (int i = 0; i < k; ++i) {
            result.push_back(freqVec[numsLength - 1 - i].second);
        }
        
        return result;
    }
};