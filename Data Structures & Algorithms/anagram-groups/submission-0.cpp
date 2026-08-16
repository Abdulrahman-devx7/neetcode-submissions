class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        // We could use an unordered_map and use the key as the sorted string 
        // So right before a string is inputted, it's sorted and used for 
        // searching. If nothing is found, the sorted string is used 
        // as a key and the original string is added to the vector of strings
        // After finishing, a 2D array is filled using the values in the hashMap

        unordered_map<string,vector<string>> GroupAnagrams;
        for(string &word: strs)
        {
            string mapKey = word; 
            sort(mapKey.begin(), mapKey.end());

            if (GroupAnagrams.find(word) != GroupAnagrams.end())        
                GroupAnagrams[mapKey].push_back(word);
                
            else 
                GroupAnagrams[mapKey].push_back(word); 
        }
        vector<vector<string>> groups;
        for(auto& [key, anagrams] : GroupAnagrams)
        {
            groups.push_back(anagrams);
        }
        return groups;
    }
};
