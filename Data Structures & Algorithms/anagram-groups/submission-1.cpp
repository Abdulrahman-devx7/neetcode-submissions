class Solution
{
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        // A more efficient solution that has an O(longestString.length()*n)time complexity
        // It uses an array of size 26 corresponding to the 26 English characters 
        // Instead of an sorting each string, this counts the frequency of all 
        // characters in a single string, only an anagram would have
        // the same frequency array, which means only characters that are anagrams
        // would get pushed to their corresponding group
        map<vector<int>, vector<string>> GroupAnagrams;

        for (string& word : strs)
        {
            vector<int> count(26, 0);

            for (char c : word)
            {
                count[c - 'a']++;
            }
            GroupAnagrams[count].push_back(word);
        }
        vector<vector<string>> groups;
        for (auto& [key, anagrams] : GroupAnagrams)
        {
            groups.push_back(anagrams);
        }
        return groups;
    }
};
