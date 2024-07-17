#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int partition(vector<int> &nums, int left, int right){
    int current = left;
    int pivot   = nums[right];
    for(int i = left ; i < right ; i++ ){
            if(nums[i] > pivot){
                swap(nums[i], nums[current]);
                current++;
            }
    }
    swap(nums[current], nums[right]);
    return current;
}
int quickSelect(vector<int> &nums, int left, int right, int k){
    int pivotIndex = partition(nums, left, right);

    if( pivotIndex == k ){
        return nums[k];
    }
    else if(pivotIndex < k){
       return  quickSelect(nums, pivotIndex + 1, right, k);
    }
    else {
        return quickSelect(nums, left, pivotIndex - 1, k);
    }
}
int findKthLargest(vector<int>& nums, int k) {
       return quickSelect(nums, 0, nums.size() - 1, k - 1);
}
int main(){

}
