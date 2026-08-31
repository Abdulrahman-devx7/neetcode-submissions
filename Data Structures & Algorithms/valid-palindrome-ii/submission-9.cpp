class Solution {
private:
    bool isPalindrome(const string& s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

public:
    // I struggled so badly.... :(
    bool validPalindrome(string s) 
    {
        int left = 0, right = s.size() - 1;

        while (left < right) 
        {
            if (s[left] != s[right]) 
            {
                return isPalindrome(s, left + 1, right) ||
                    isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }

        return true;
    }
};
