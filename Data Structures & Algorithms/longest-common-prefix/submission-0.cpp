class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
        {
            return "";
        }

        string prefix = "";
        for(int i = 0; i < strs[0].length(); i++)
        {
            for(int j = 0; j < strs.size()-1; j++)
            {
                if(strs[j][i] != strs[j+1][i])
                {
                    return prefix;
                }
            }
            prefix = prefix + strs[0].substr(i,1);
        }
        return prefix;
    }
};