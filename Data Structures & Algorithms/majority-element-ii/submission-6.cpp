class Solution 
{
public:
    //Misra-Gries Algorithm: a generalized version of Boyer-Moore

    //This is used to fix iterator invalidation while iterating over the hashmap

    void prevent3rdElement(unordered_map<int, int> &miniMap)
    {
        vector<int>toDelete;

        for(auto &[number, currentFreq] : miniMap)
        {
            currentFreq--;
            if(currentFreq==0)
                toDelete.push_back(number);
        }

        for(short i=0; i<toDelete.size(); i++)
        {
            miniMap.erase(toDelete[i]);
        }
    }

    vector<int> getMajorityElements(vector<int>& nums, unordered_map<int, int> &miniMap)
    {
        vector<int> freqResult;
        for(auto &[number, currentFreq]: miniMap)
        {
            int freq=0;
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]==number)
                    freq++;
                if(freq>nums.size()/3)
                {
                    freqResult.push_back(number);
                    break;
                }
            }
        }
        return freqResult;
    }

    vector<int> majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int>freqMapTop2;
        for(int i=0; i<nums.size(); i++)
        {
            freqMapTop2[nums[i]]++;
            if(freqMapTop2.size()>2)
                prevent3rdElement(freqMapTop2);
        }
        return getMajorityElements(nums, freqMapTop2);
    }
};