class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        int i,j,n,sum=0,x;
        n=nums.length;
        for(i=0;i<n;i++)
            sum+=nums[i];
        x=(sum+target);
        if(x%2==1)
            return 0;
           if(n==1 && nums[0]==target*(-1))
           return 1;
        if(n==1 && nums[0]!=target)
            return 0;
        x=x/2;
        int[][] dp = new int[n][x+1];
        if(nums[0]==0) 
            dp[0][0]=2;
        else 
            dp[0][0]=1;
        for(i=1;i<n;i++)
            dp[i][0]=1;
        if(nums[0]!=0 && nums[0]<=x)
            dp[0][nums[0]]=1;
        for(i=1;i<n;i++){
            for(j=0;j<x+1;j++){
                int nottake = dp[i-1][j];
                int take = 0;
                if(nums[i]<=j)
                    take=dp[i-1][j-nums[i]];
                dp[i][j]=take+nottake;
                }
            }
        return dp[n-1][x];
    }
}