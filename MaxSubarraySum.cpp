#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    long long sum=0;
    long long maxSum= INT_MIN;
        for(int i=0; i<n ; i++)
        {
            sum +=nums[i];
            maxSum= max(sum,maxSum);
            if(sum<0) sum=0;
        }
    if(maxSum<0) return 0;
        return maxSum;
        
}