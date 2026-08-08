class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> hash;
        
        for(int i = 0; i < nums.size();i++)
        {
            hash[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(hash.contains(target-nums[i]) && i != hash.at(target-nums[i]))
            {
                int one = min(i, hash.at(target-nums[i]));
                int two = max(i, hash.at(target-nums[i]));
                return {one, two};
            }
        } 
    }
};
