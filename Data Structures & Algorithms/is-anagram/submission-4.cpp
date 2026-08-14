class Solution {
public:
    bool isAnagram(string s, string t) {
        // Here's the HashMap solution
        // We'll fill both strings into an unordered_map
        // Loop over the first HashMap's elements, check if the value of the first key equals its equivalent there or not(if there were)

        unordered_map<char, int> firstStringLetters;
        unordered_map<char, int> secondStringLetters;

        if (s.length() != t.length()) {
            return false;
        } else {
            for (char c : s) {
                if (!firstStringLetters.contains(c))
                    firstStringLetters.insert({c, 1});
                else
                    firstStringLetters[c]++;
            }

            for (char c : t) {
                if (!secondStringLetters.contains(c))
                    secondStringLetters.insert({c, 1});
                else
                    secondStringLetters[c]++;
            }

            for (const auto& [ch, frequency] : firstStringLetters) {
                if (secondStringLetters.contains(ch)) {
                    if (secondStringLetters[ch] != frequency)
                        return false;
                } else {
                    return false;
                }
            }
            return true;
        }        
    }
};