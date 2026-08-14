class Solution {
public:
    // A hakcer solution:
    // Firstly, we check if they are the same length or not. If they aren't the same, we return false.
    // Secondly, as the scope of the string contents is merely limited to 26 English letters, here's the twist:
    // We'll initialize an array with 26 elements, each of which corresponding to an small English letter
    // Each index of that array is going to act almost like an antique scale. If both strings were
    // anagrams, all array elements should remain 0 as one letter in the first string for example
    // acts like something that unbalances the scale to the left, while the same letter in the other
    // string unbalances it to the opposite side. 
    // Now translate this embodiment to incrementing and decrementing depending on the letter in the loop
    // If the loop (the first loop btw) finishes and then we spot a non-zero value in the array, this means
    // that either of the two strings has more of that character, which defies anagram
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int count[26] = {};

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int value : count) {
            if (value != 0) {
                return false;
            }
        }

        return true;
    }
};