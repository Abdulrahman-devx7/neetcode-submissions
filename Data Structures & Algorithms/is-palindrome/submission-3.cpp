class Solution
{
public:
    bool isPalindrome(string s) 
    {
        short left = 0, right = s.length()-1;
        string copy = "";

        for(short i=0; i<s.length(); i++)
        { 
            if(isalnum(s[i]))
                copy += tolower(s[i]);
        }

        for(short i=0; i<copy.length()/2; i++)
        {
            if(copy[i]!=copy[copy.length()-1-i])
                return false;
        }

        return true;
    }
};
