class Solution
{
public:
    bool isPalindrome(string s)
    {
        // I think the two pointers from the left and right
        // should keep going until they meet up
        short left = 0, right = s.length() - 1;
        short numAlnum = 0;

        while ((left != right))
        {
            while(!isalnum(s[right]) && left<right)
                right--;

            while(!isalnum(s[left]) && left<right)
                left++;

            if (isalnum(s[left]))
            {
                numAlnum++;

                if (isalnum(s[right]))
                {
                    numAlnum++;

                    if (tolower(s[left]) != tolower(s[right]))
                        return false;
                }
            }

            if (left != right)
            {
                right--;
                if(left!=right)
                    left++;
            }
        }

        if ((numAlnum == 1) || (numAlnum == 0))
            return true;

        return true;
    }
};
