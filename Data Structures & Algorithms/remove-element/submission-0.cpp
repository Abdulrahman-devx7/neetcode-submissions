class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        short k=0;
        for(short i=0; i<nums.size(); i++)
        {
            if(nums[i]==val)
                nums[i]=51; 
            else
                ++k;
        }        
        sort(nums.begin(), nums.end());
        return k;
    }
};