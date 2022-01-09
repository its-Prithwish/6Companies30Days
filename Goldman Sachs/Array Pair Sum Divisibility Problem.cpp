bool canPair(vector<int> nums, int k) {
       unordered_map <int, int> ump;
       int n = nums.size();
       for (int i=0; i<n; i++){
           ump[nums[i]%k]++;
       }
       
       for (int i=0; i<n; i++){
           int rem = nums[i]%k;
           
           if (rem ==0){
               if (ump[rem]%2 !=0){
                   return false;
               }
           }
           
           else if (2*rem == k){
               if (ump[rem]%2 !=0){
                   return false;
               }
           }
           
           else{
               if (ump[rem] != ump[k-rem]){
                   return false;
               }
           }
       }
       return true;
   }
