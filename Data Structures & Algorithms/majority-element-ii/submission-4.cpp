class Solution
{
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        vector<int> frequent;
        sort(nums.begin(), nums.end());

        int currentNum = nums[0];
        short freqNum = 1;

        if ((nums.size() == 2) || nums.size()==1)
            frequent.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != currentNum)
            {
                currentNum = nums[i];
                freqNum = 1;
            }
            else
                freqNum++;

            if (freqNum > nums.size() / 3)
            {
                frequent.push_back(currentNum);

                while ((nums[i] == currentNum) && i < nums.size() - 1)
                    ++i;

                currentNum = nums[i];
                freqNum = 1;
            }
        }
        return frequent;
    }
};
