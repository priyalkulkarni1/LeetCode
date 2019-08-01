class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> hash;
        
        
        for(int i = 0;i<nums.size();i++)
        {
            int complement = target - nums[i];
            
            //for(int j = i+1;j<nums.size();j++)
            //{
            //    if(nums[j] == complement)
            //        return {i,j};
            //}
            
            auto itr =hash.find(complement);  
            
            if( itr!= hash.end())
                return {itr->second,i};
            
            hash.insert(pair<int,int>(nums[i],i));  
            
            
        }
        
        return {0,0};
        
    }
};
