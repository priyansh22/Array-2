/*
* Time Complexity : O(n)
* Space Complexity : O(1)
* Did it run on LeetCode : Yes
* Any difficulties : No
*/ 


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int size= nums.size();
        for(int i=0;i<size;i++)
        {
            int idx=abs(nums[i])-1;
            if(nums[idx]> 0) 
                nums[idx]*=-1;
            
        }
         for(int i=0;i<size;i++)
        {
            if(nums[i]>0)
                result.push_back(i+1);
        }
    return result;
    }
    
};