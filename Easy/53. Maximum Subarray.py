def maxSubArray(self, nums: List[int]) -> int:
        if not nums:
            return 0
        dp=[0]*len(nums)
        dp[0]=nums[0]
        idx=1
        for i in nums[1:]:
            dp[idx]=max(i,dp[idx-1]+i)
            idx+=1
        return max(dp)
            
