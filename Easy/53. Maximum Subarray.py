def maxSubArray(self, nums: List[int]) -> int:
        #This is a DP algorithm
        #dp stores max(current,last_dp_value + current)
        if not nums:
            return 0
        dp=[0]*len(nums)
        dp[0]=nums[0]
        idx=1
        for i in nums[1:]:
            dp[idx]=max(i,dp[idx-1]+i)
            idx+=1
        return max(dp)
            
