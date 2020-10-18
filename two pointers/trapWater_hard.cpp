/*
	Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
*/

// DP approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n<=2)
        {
            return 0;
        }
        vector<int>left(n,0);
        vector<int>right(n);
        
        left[0]=height[0];
        cout<<left[0]<<"\n";
        int mx=left[0];
        int i;
        for(i=1;i<n;i++)
        {
            left[i]=max(mx,height[i-1]);
            if(height[i-1]>mx)
                mx=height[i-1];
        }
        right[n-1]=height[n-1];
        mx=right[n-1];
        for(i=n-2;i>=0;i--)
        {
            right[i]=max(mx,height[i+1]);
            if(height[i+1]>mx)
                mx=height[i+1];
        }
        for(int i=0;i<n;i++)
        {
            cout<<left[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<right[i]<<" ";
        }
        int ans=0;
        for(i=1;i<n-1;i++)
        {
            int temp=min(left[i],right[i]);
            if(temp<height[i])
            {
                continue;
            }
            ans+=(temp-height[i]);
        }
        return ans;
    }
};
T(n) : O(n)
S(n) : O(n)
// Two pointer approach

class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int left=0;
        int right=height.size()-1;
        int left_max=0;
        int right_max=0;
        while(left<right)
        {
            if(height[left]<height[right])
            {
                if(height[left]>=left_max)
                {
                    left_max=height[left];
                }
                else
                {
                    ans+=left_max-height[left];
                }
                left++;
            }
            else
            {
                if(height[right]>=right_max)
                {
                    right_max=height[right];
                }
                else
                {
                    ans+=(right_max-height[right]);
                }
                right--;
            }
        }
        return ans;
    }
};

T(n) : O(n)
S(n) : O(1)
