// Leetcode

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sortVowels(string s)
    {
        string vowels, consonants;
        
        for (int i = 0; i < s.length(); ++i)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels += ch;
            }
            else
            {
                consonants += ch;
            }
        }

        sort(vowels.begin(), vowels.end());

        string result;
        int vowelIndex = 0, consonantIndex = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                result += vowels[vowelIndex++];
            }
            else
            {
                result += consonants[consonantIndex++];
            }
        }

        return result;
    }
};