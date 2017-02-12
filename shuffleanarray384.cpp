class Solution {
public:
vector<int> nums;
vector<int> output;
    Solution(vector<int> nums):nums(nums),output(nums){
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
      return output=nums;  
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
      int n=output.size();
      for(int i=n-1;i>=0;i--){
      int l=rand()%(i+1);
      swap(output[i],output[l]);
      }
      return output;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */