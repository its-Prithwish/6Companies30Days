class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int tracker=0;
        int globalMin=Integer.MAX_VALUE;
        int localSum=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>=target){
                return 1;
            }
    
            
            localSum+=nums[i];
            while(localSum>target && tracker<=i-1){
                globalMin=Math.min(globalMin,i-tracker+1);
                localSum-=nums[tracker];
                tracker++;
            }
            
            if(localSum==target){
                globalMin=Math.min(globalMin,i-tracker+1);
            }
        }
        if(globalMin==Integer.MAX_VALUE){
            return 0;
        }
        
        return globalMin;
    }
}
