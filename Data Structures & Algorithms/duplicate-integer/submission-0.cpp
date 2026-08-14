class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Load the vector to the unordered_set, but before any loading
        // Use the method in the unordered_set to check if it's there or not
        // There's a method that returns true or false when trying to add a 
        unordered_set<int> numbers;
        for(int number: nums)
        {
            if(!numbers.contains(number))
                numbers.insert(number);

            else return true;
        }
        return false;
    }
};