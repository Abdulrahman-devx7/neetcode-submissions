class Solution
{
public:

    //THOUGHTS: 

    // First of all, how is "no longest common prefix" defined? 
    // It seems like multiple prefixes are counted, and if nothing seems to be very
    // common than all others, we just return an empty dude.

    // If this were to be solved normally, I think it'd require a brute-force solution
    // The solution would initially find the smallest string in the whole thing 

    // And then start comparing the whole string all things, once a mismatch is found, 
    // the string is shrunken and the searching starts all over again until a complete 
    // match is found all over the array
    // Is there something we can do to the array such as sorting or anything else to
    // make this faster?

    // FINAL SOLUTION: TRY NO BRUTE-FORCE
    // We'll sort the array lexicographically, and then grab the shortest in lexico order, which is
    // the first one, and then start comparing it to the last one in someway:
    string longestCommonPrefix(vector<string>& strs)
    {
        char letter;
        if(strs[0]!="")
            letter = strs[0][0];

        for(short i=1; i<strs.size(); i++)
        {
            if(strs[i]!="")
            {
                if(strs[i][0]!=letter)
                    return "";
            }
            else return "";
        }

        sort(strs.begin(), strs.end());

        string firstLexi = strs[0];
        string lastLexi = strs[strs.size() - 1];
        short len = 0;

        if (lastLexi.length() < firstLexi.length())
            swap(firstLexi, lastLexi);

        len = firstLexi.length();

        for (short i = 0; i < len; i++)
        {
            if (firstLexi == lastLexi.substr(0, firstLexi.length()))
                return firstLexi;
            else
                firstLexi.pop_back();
        }

        return "";
    }
};