class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        // Given that the number are in closed range of -1000 to 1000, we'll bypass this minus numbering by creating
        // a frequency array of 2001 elements and fill the frequencies of each element, even the negative ones by 
        // adding 1000 during the fill up
        // We then use a map to use frequencies as keys and sort by freqs descendingly, while possessing the value
        // as the intended number
        // We then traverse the map k times to push the results

        vector<short> freqArray(2001, 0);
        multimap<short, short, greater<short>> freqSorted;

        for (short i = 0; i < nums.size(); i++)
        {
            freqArray[nums[i] + 1000]++;
        }

        for (short i = 0; i < freqArray.size(); i++)
        {
            if (freqArray[i] != 0)
            {
                freqSorted.insert({ freqArray[i], i - 1000 });
            }
        }

        vector<int> results;

        int counter = 0;
        for (auto& element : freqSorted)
        {
            if (counter == k)
                break;

            counter++;
            results.push_back(element.second);
        }

        return results;
    }
};
