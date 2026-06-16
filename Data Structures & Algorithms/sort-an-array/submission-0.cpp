class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high){
        vector<int> ans(high - low + 1);
        int i=low; 
        int j=mid+1;
        int k=0;
        while(i <= mid && j <= high){
            if(nums[i] <= nums[j]){
                ans[k++] = nums[i++];
            }
            else{
                ans[k++] = nums[j++];
            }
        }
        while(i <= mid){
            ans[k++] = nums[i++];
        }
        while(j <= high){
            ans[k++] = nums[j++];
        }
        for(int i=0; i<ans.size(); i++){
            nums[i+low] = ans[i];
        }
    }

    void mergesort(vector<int>& nums, int low, int high){
        if(low >= high) return;

        int mid = low + (high - low)/2;
        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        mergesort(nums, low, high);
        return nums;
    }
};