class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if(s.length() != t.length())
        {
            return false;
        }
        
        unordered_multiset<char> shash;
        unordered_multiset<char> thash;

        for(int i = 0; i < s.length(); i++)
        {
            shash.insert(s[i]);
            thash.insert(t[i]);
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
