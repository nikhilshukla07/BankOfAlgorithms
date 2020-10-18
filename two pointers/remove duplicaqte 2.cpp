class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return n;
        int left=2;
        for(int right=2;right<n;right++)
        {
            if(nums[left-2]!=nums[right])
                nums[left++]=nums[right];
        }
        return left;
  }
};
