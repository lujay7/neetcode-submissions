class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if(s.length() != t.length())
        {
            return false;
        }
        
        unordered_map<char, int> shash;
        unordered_map<char, int> thash;

        for(int i = 0; i < s.length(); i++)
        {
            shash[s[i]]++;
            thash[t[i]]++;
        }
        
        if(shash == thash)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
