// by reversing

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
        }
    void reverse(vector<int>&nums,int start,int end)
    {
        while(start<end)
        {
            int temp=nums[end];
            nums[end]=nums[start];
            nums[start]=temp;
            start++;
            end--;
        }
    }
     
};

// By cyclic movement
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int count=0;
        for(int start=0;count<n;start++)
        {
            int current=start;
            int prev=nums[start];
            do{
                int next=(current+k)%n;
                int temp=nums[next];
                nums[next]=prev;
                prev=temp;
                current=next;
                count++;
            }while(start!=current);
        }
      }
};
