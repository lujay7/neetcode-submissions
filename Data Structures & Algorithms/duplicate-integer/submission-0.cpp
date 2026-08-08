class Solution
{
public:
    bool hasDuplicate(vector<int>& nums)
    {
        unordered_set<int> hash;
        for(int i = 0; i < nums.size(); i++)
        {
            hash.insert(nums[i]);
        }
        if(hash.size() == nums.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};