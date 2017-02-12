using namespace std;
class Solution {
public:
    int searchInsert(vector<int> nums, int target) {
       
    if(target>nums[nums.size()-1]){
        return nums.size();
    } 
    int i=0;
    int j=nums.size();
 
    while(i<j){
        int m=(i+j)/2;
        if(target>nums[m]){
            i=m+1;
        }else{
            j=m;
        }
    }
 
    return j;
    }
};