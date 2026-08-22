class Solution 
{
public:
    // How about using swapping?
    // if we detect a `val`, we just take a copy of it, push it
    // to the back of the array, 
    int removeElement(vector<int>& nums, int val) 
    {
        short k=0;
        for(short i=0; i<nums.size(); i++)
        {
            if(nums[i]==val)
            {
                for(short j = i; j<nums.size(); j++)
                {
                    if(nums[j]!=val)
                    {
                        k++;
                        swap(nums[i], nums[j]);
                        break;
                    }
                }
            }
            else k++;
        }        
        return k;
    }
};