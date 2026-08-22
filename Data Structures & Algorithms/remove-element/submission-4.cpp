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
            if(nums[i]!=val)
                k++;
            else 
            {
                nums.erase(nums.begin()+i);
                --i;
            }
        }
        return k;
    }

};